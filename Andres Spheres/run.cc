
//Andres's Code


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

MyRunAction::MyRunAction()
{
	G4AnalysisManager* man = G4AnalysisManager::Instance();

	man->CreateNtuple("Scoring_0", "Scoring_0");
	man->CreateNtupleDColumn("Deposit#");
	man->CreateNtupleDColumn("fEdep");
	man->CreateNtupleDColumn("Dose_Rad_Si");
	man->CreateNtupleDColumn("Total_Edep");
	man->CreateNtupleDColumn("Total_Dose");
	man->CreateNtupleDColumn("AvgEdep");
	man->CreateNtupleDColumn("AvgDose");
	man->FinishNtuple(0);

	man->CreateNtuple("Scoring_1", "Scoring_1");
	man->CreateNtupleDColumn("Deposit#");
	man->CreateNtupleDColumn("fEdep");
	man->CreateNtupleDColumn("Dose_Rad_Si");
	man->CreateNtupleDColumn("Total_Edep");
	man->CreateNtupleDColumn("Total_Dose");
	man->CreateNtupleDColumn("AvgEdep");
	man->CreateNtupleDColumn("AvgDose");
	man->FinishNtuple(1);

	man->CreateNtuple("Scoring_2", "Scoring_2");
	man->CreateNtupleDColumn("Deposit#");
	man->CreateNtupleDColumn("fEdep");
	man->CreateNtupleDColumn("Dose_Rad_Si");
	man->CreateNtupleDColumn("Total_Edep");
	man->CreateNtupleDColumn("Total_Dose");
	man->CreateNtupleDColumn("AvgEdep");
	man->CreateNtupleDColumn("AvgDose");
	man->FinishNtuple(2);

	man->CreateNtuple("Scoring_3", "Scoring_3");
	man->CreateNtupleDColumn("Deposit#");
	man->CreateNtupleDColumn("fEdep");
	man->CreateNtupleDColumn("Dose_Rad_Si");
	man->CreateNtupleDColumn("Total_Edep");
	man->CreateNtupleDColumn("Total_Dose");
	man->CreateNtupleDColumn("AvgEdep");
	man->CreateNtupleDColumn("AvgDose");
	man->FinishNtuple(3);

	man->CreateNtuple("Scoring_4", "Scoring_4");
	man->CreateNtupleDColumn("Deposit#");
	man->CreateNtupleDColumn("fEdep");
	man->CreateNtupleDColumn("Dose_Rad_Si");
	man->CreateNtupleDColumn("Total_Edep");
	man->CreateNtupleDColumn("Total_Dose");
	man->CreateNtupleDColumn("AvgEdep");
	man->CreateNtupleDColumn("AvgDose");
	man->FinishNtuple(4);

	man->CreateNtuple("Scoring_5", "Scoring_5");
	man->CreateNtupleDColumn("Deposit#");
	man->CreateNtupleDColumn("fEdep");
	man->CreateNtupleDColumn("Dose_Rad_Si");
	man->CreateNtupleDColumn("Total_Edep");
	man->CreateNtupleDColumn("Total_Dose");
	man->CreateNtupleDColumn("AvgEdep");
	man->CreateNtupleDColumn("AvgDose");
	man->FinishNtuple(5);

	man->CreateNtuple("Scoring_6", "Scoring_6");
	man->CreateNtupleDColumn("Deposit#");
	man->CreateNtupleDColumn("fEdep");
	man->CreateNtupleDColumn("Dose_Rad_Si");
	man->CreateNtupleDColumn("Total_Edep");
	man->CreateNtupleDColumn("Total_Dose");
	man->CreateNtupleDColumn("AvgEdep");
	man->CreateNtupleDColumn("AvgDose");
	man->FinishNtuple(6);

	man->CreateNtuple("Scoring_7", "Scoring_7");
	man->CreateNtupleDColumn("Deposit#");
	man->CreateNtupleDColumn("fEdep");
	man->CreateNtupleDColumn("Dose_Rad_Si");
	man->CreateNtupleDColumn("Total_Edep");
	man->CreateNtupleDColumn("Total_Dose");
	man->CreateNtupleDColumn("AvgEdep");
	man->CreateNtupleDColumn("AvgDose");
	man->FinishNtuple(7);

	man->CreateNtuple("Scoring_8", "Scoring_8");
	man->CreateNtupleDColumn("Deposit#");
	man->CreateNtupleDColumn("fEdep");
	man->CreateNtupleDColumn("Dose_Rad_Si");
	man->CreateNtupleDColumn("Total_Edep");
	man->CreateNtupleDColumn("Total_Dose");
	man->CreateNtupleDColumn("AvgEdep");
	man->CreateNtupleDColumn("AvgDose");
	man->FinishNtuple(8);

	man->CreateNtuple("Scoring_9", "Scoring_9");
	man->CreateNtupleDColumn("Deposit#");
	man->CreateNtupleDColumn("fEdep");
	man->CreateNtupleDColumn("Dose_Rad_Si");
	man->CreateNtupleDColumn("Total_Edep");
	man->CreateNtupleDColumn("Total_Dose");
	man->CreateNtupleDColumn("AvgEdep");
	man->CreateNtupleDColumn("AvgDose");
	man->FinishNtuple(9);

	man->CreateNtuple("Scoring_10", "Scoring_10");
	man->CreateNtupleDColumn("Deposit#");
	man->CreateNtupleDColumn("fEdep");
	man->CreateNtupleDColumn("Dose_Rad_Si");
	man->CreateNtupleDColumn("Total_Edep");
	man->CreateNtupleDColumn("Total_Dose");
	man->CreateNtupleDColumn("AvgEdep");
	man->CreateNtupleDColumn("AvgDose");
	man->FinishNtuple(10);

	man->CreateNtuple("Scoring_11", "Scoring_11");
	man->CreateNtupleDColumn("Deposit#");
	man->CreateNtupleDColumn("fEdep");
	man->CreateNtupleDColumn("Dose_Rad_Si");
	man->CreateNtupleDColumn("Total_Edep");
	man->CreateNtupleDColumn("Total_Dose");
	man->CreateNtupleDColumn("AvgEdep");
	man->CreateNtupleDColumn("AvgDose");
	man->FinishNtuple(11);

	man->CreateNtuple("Scoring_12", "Scoring_12");
	man->CreateNtupleDColumn("Deposit#");
	man->CreateNtupleDColumn("fEdep");
	man->CreateNtupleDColumn("Dose_Rad_Si");
	man->CreateNtupleDColumn("Total_Edep");
	man->CreateNtupleDColumn("Total_Dose");
	man->CreateNtupleDColumn("AvgEdep");
	man->CreateNtupleDColumn("AvgDose");
	man->FinishNtuple(12);

	man->CreateNtuple("Scoring_13", "Scoring_13");
	man->CreateNtupleDColumn("Deposit#");
	man->CreateNtupleDColumn("fEdep");
	man->CreateNtupleDColumn("Dose_Rad_Si");
	man->CreateNtupleDColumn("Total_Edep");
	man->CreateNtupleDColumn("Total_Dose");
	man->CreateNtupleDColumn("AvgEdep");
	man->CreateNtupleDColumn("AvgDose");
	man->FinishNtuple(13);

	man->CreateNtuple("Scoring_14", "Scoring_14");
	man->CreateNtupleDColumn("Deposit#");
	man->CreateNtupleDColumn("fEdep");
	man->CreateNtupleDColumn("Dose_Rad_Si");
	man->CreateNtupleDColumn("Total_Edep");
	man->CreateNtupleDColumn("Total_Dose");
	man->CreateNtupleDColumn("AvgEdep");
	man->CreateNtupleDColumn("AvgDose");
	man->FinishNtuple(14);

	man->CreateNtuple("Scoring_15", "Scoring_15");
	man->CreateNtupleDColumn("Deposit#");
	man->CreateNtupleDColumn("fEdep");
	man->CreateNtupleDColumn("Dose_Rad_Si");
	man->CreateNtupleDColumn("Total_Edep");
	man->CreateNtupleDColumn("Total_Dose");
	man->CreateNtupleDColumn("AvgEdep");
	man->CreateNtupleDColumn("AvgDose");
	man->FinishNtuple(15);

	man->CreateNtuple("Scoring_16", "Scoring_16");
	man->CreateNtupleDColumn("Deposit#");
	man->CreateNtupleDColumn("fEdep");
	man->CreateNtupleDColumn("Dose_Rad_Si");
	man->CreateNtupleDColumn("Total_Edep");
	man->CreateNtupleDColumn("Total_Dose");
	man->CreateNtupleDColumn("AvgEdep");
	man->CreateNtupleDColumn("AvgDose");
	man->FinishNtuple(16);

	man->CreateNtuple("Scoring_17", "Scoring_17");
	man->CreateNtupleDColumn("Deposit#");
	man->CreateNtupleDColumn("fEdep");
	man->CreateNtupleDColumn("Dose_Rad_Si");
	man->CreateNtupleDColumn("Total_Edep");
	man->CreateNtupleDColumn("Total_Dose");
	man->CreateNtupleDColumn("AvgEdep");
	man->CreateNtupleDColumn("AvgDose");
	man->FinishNtuple(17);

	man->CreateNtuple("Scoring_18", "Scoring_18");
	man->CreateNtupleDColumn("Deposit#");
	man->CreateNtupleDColumn("fEdep");
	man->CreateNtupleDColumn("Dose_Rad_Si");
	man->CreateNtupleDColumn("Total_Edep");
	man->CreateNtupleDColumn("Total_Dose");
	man->CreateNtupleDColumn("AvgEdep");
	man->CreateNtupleDColumn("AvgDose");
	man->FinishNtuple(18);

	man->CreateNtuple("Scoring_19", "Scoring_19");
	man->CreateNtupleDColumn("Deposit#");
	man->CreateNtupleDColumn("fEdep");
	man->CreateNtupleDColumn("Dose_Rad_Si");
	man->CreateNtupleDColumn("Total_Edep");
	man->CreateNtupleDColumn("Total_Dose");
	man->CreateNtupleDColumn("AvgEdep");
	man->CreateNtupleDColumn("AvgDose");
	man->FinishNtuple(19);

	man->CreateNtuple("Scoring_20", "Scoring_20");
	man->CreateNtupleDColumn("Deposit#");
	man->CreateNtupleDColumn("fEdep");
	man->CreateNtupleDColumn("Dose_Rad_Si");
	man->CreateNtupleDColumn("Total_Edep");
	man->CreateNtupleDColumn("Total_Dose");
	man->CreateNtupleDColumn("AvgEdep");
	man->CreateNtupleDColumn("AvgDose");
	man->FinishNtuple(20);

	man->CreateNtuple("Scoring_21", "Scoring_21");
	man->CreateNtupleDColumn("Deposit#");
	man->CreateNtupleDColumn("fEdep");
	man->CreateNtupleDColumn("Dose_Rad_Si");
	man->CreateNtupleDColumn("Total_Edep");
	man->CreateNtupleDColumn("Total_Dose");
	man->CreateNtupleDColumn("AvgEdep");
	man->CreateNtupleDColumn("AvgDose");
	man->FinishNtuple(21);

	man->CreateNtuple("Scoring_22", "Scoring_22");
	man->CreateNtupleDColumn("Deposit#");
	man->CreateNtupleDColumn("fEdep");
	man->CreateNtupleDColumn("Dose_Rad_Si");
	man->CreateNtupleDColumn("Total_Edep");
	man->CreateNtupleDColumn("Total_Dose");
	man->CreateNtupleDColumn("AvgEdep");
	man->CreateNtupleDColumn("AvgDose");
	man->FinishNtuple(22);

	man->CreateNtuple("Scoring_23", "Scoring_23");
	man->CreateNtupleDColumn("Deposit#");
	man->CreateNtupleDColumn("fEdep");
	man->CreateNtupleDColumn("Dose_Rad_Si");
	man->CreateNtupleDColumn("Total_Edep");
	man->CreateNtupleDColumn("Total_Dose");
	man->CreateNtupleDColumn("AvgEdep");
	man->CreateNtupleDColumn("AvgDose");
	man->FinishNtuple(23);

	man->CreateNtuple("Scoring_24", "Scoring_24");
	man->CreateNtupleDColumn("Deposit#");
	man->CreateNtupleDColumn("fEdep");
	man->CreateNtupleDColumn("Dose_Rad_Si");
	man->CreateNtupleDColumn("Total_Edep");
	man->CreateNtupleDColumn("Total_Dose");
	man->CreateNtupleDColumn("AvgEdep");
	man->CreateNtupleDColumn("AvgDose");
	man->FinishNtuple(24);

	man->CreateNtuple("Scoring_25", "Scoring_25");
	man->CreateNtupleDColumn("Deposit#");
	man->CreateNtupleDColumn("fEdep");
	man->CreateNtupleDColumn("Dose_Rad_Si");
	man->CreateNtupleDColumn("Total_Edep");
	man->CreateNtupleDColumn("Total_Dose");
	man->CreateNtupleDColumn("AvgEdep");
	man->CreateNtupleDColumn("AvgDose");
	man->FinishNtuple(25);
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