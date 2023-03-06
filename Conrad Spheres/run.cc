
//Conrad's Code


#include "run.hh"
#include "G4AccumulableManager.hh"
#include "construction.hh"
#include "G4RunManager.hh"
#include "G4Run.hh"
#include "G4AccumulableManager.hh"
#include "G4LogicalVolumeStore.hh"
#include "G4LogicalVolume.hh"
#include "G4UnitsTable.hh"
#include "G4SystemOfUnits.hh"
#include<string> //new addition
#include<iostream> //newaddition

MyRunAction::MyRunAction()
{
	G4AnalysisManager* man = G4AnalysisManager::Instance();
	/* This next chunk of code is essentially naming files for each of
	the scoring volumes. It will eventually need to be optimized, but
	for right now, I believe it is adequate for our purposes. I do not
	know how it will perform for multi-threading (probably won't).
	*/

	for(int i = 0; i < 27; i++){
		
		std::string my_chunk = "Scoring_";
		std::string my_num = std::to_string(i);

		std::string my_title = my_chunk + my_num;

		man->CreateNtuple(my_title, my_title);
		man->CreateNtupleDColumn("Deposit#");
		man->CreateNtupleDColumn("fEdep");
		man->CreateNtupleDColumn("Dose_Rad_Si");
		man->CreateNtupleDColumn("Total_Edep");
		man->CreateNtupleDColumn("Total_Dose");
		man->CreateNtupleDColumn("AvgEdep");
		man->CreateNtupleDColumn("AvgDose");
		man->FinishNtuple(i);
	}
}

MyRunAction::~MyRunAction()
{}

void MyRunAction::BeginOfRunAction(const G4Run* run)
{
	G4AnalysisManager* man = G4AnalysisManager::Instance();

	G4int runID = run->GetRunID();

	std::stringstream strRunID;
	strRunID << runID;

	man->OpenFile("output"+strRunID.str()+".csv");
}

void MyRunAction::EndOfRunAction(const G4Run* run)
{
	G4AnalysisManager* man = G4AnalysisManager::Instance();

	man->Write();
	man->CloseFile();
}