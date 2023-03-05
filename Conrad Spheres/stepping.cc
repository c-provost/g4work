#include "stepping.hh"

MySteppingAction::MySteppingAction(MyEventAction* eventAction)
{
	fEventAction = eventAction;
}

MySteppingAction::~MySteppingAction()
{}

void MySteppingAction::UserSteppingAction(const G4Step* step)
{
	G4LogicalVolume* volume = step->GetPreStepPoint()->GetTouchableHandle()->GetVolume()->GetLogicalVolume();

	const MyDetectorConstruction* detectorConstruction = static_cast<const MyDetectorConstruction*> (G4RunManager::GetRunManager()->GetUserDetectorConstruction());

	G4LogicalVolume* fScoringVolume_0 = detectorConstruction->GetScoringVolume_0();
	G4LogicalVolume* fScoringVolume_1 = detectorConstruction->GetScoringVolume_1();
	G4LogicalVolume* fScoringVolume_2 = detectorConstruction->GetScoringVolume_2();
	G4LogicalVolume* fScoringVolume_3 = detectorConstruction->GetScoringVolume_3();
	G4LogicalVolume* fScoringVolume_4 = detectorConstruction->GetScoringVolume_4();
	G4LogicalVolume* fScoringVolume_5 = detectorConstruction->GetScoringVolume_5();
	G4LogicalVolume* fScoringVolume_6 = detectorConstruction->GetScoringVolume_6();
	G4LogicalVolume* fScoringVolume_7 = detectorConstruction->GetScoringVolume_7();
	G4LogicalVolume* fScoringVolume_8 = detectorConstruction->GetScoringVolume_8();
	G4LogicalVolume* fScoringVolume_9 = detectorConstruction->GetScoringVolume_9();
	G4LogicalVolume* fScoringVolume_10 = detectorConstruction->GetScoringVolume_10();

	G4LogicalVolume* fScoringVolume_11 = detectorConstruction->GetScoringVolume_11();
	G4LogicalVolume* fScoringVolume_12 = detectorConstruction->GetScoringVolume_12();
	G4LogicalVolume* fScoringVolume_13 = detectorConstruction->GetScoringVolume_13();
	G4LogicalVolume* fScoringVolume_14 = detectorConstruction->GetScoringVolume_14();
	G4LogicalVolume* fScoringVolume_15 = detectorConstruction->GetScoringVolume_15();
	G4LogicalVolume* fScoringVolume_16 = detectorConstruction->GetScoringVolume_16();
	G4LogicalVolume* fScoringVolume_17 = detectorConstruction->GetScoringVolume_17();
	G4LogicalVolume* fScoringVolume_18 = detectorConstruction->GetScoringVolume_18();
	G4LogicalVolume* fScoringVolume_19 = detectorConstruction->GetScoringVolume_19();
	G4LogicalVolume* fScoringVolume_20 = detectorConstruction->GetScoringVolume_20();
	G4LogicalVolume* fScoringVolume_21 = detectorConstruction->GetScoringVolume_21();
	G4LogicalVolume* fScoringVolume_22 = detectorConstruction->GetScoringVolume_22();
	G4LogicalVolume* fScoringVolume_23 = detectorConstruction->GetScoringVolume_23();
	G4LogicalVolume* fScoringVolume_24 = detectorConstruction->GetScoringVolume_24();
	G4LogicalVolume* fScoringVolume_25 = detectorConstruction->GetScoringVolume_25();

	if (volume == fScoringVolume_0)
	{
		G4double edep_0 = step->GetTotalEnergyDeposit();
		fEventAction->AddEnergyDep_0(edep_0);
	}

	if (volume == fScoringVolume_1)
	{
		G4double edep_1 = step->GetTotalEnergyDeposit();
		fEventAction->AddEnergyDep_1(edep_1);
	}

	if (volume == fScoringVolume_2)
	{
		G4double edep_2 = step->GetTotalEnergyDeposit();
		fEventAction->AddEnergyDep_2(edep_2);
	}

	if (volume == fScoringVolume_3)
	{
		G4double edep_3 = step->GetTotalEnergyDeposit();
		fEventAction->AddEnergyDep_3(edep_3);
	}

	if (volume == fScoringVolume_4)
	{
		G4double edep_4 = step->GetTotalEnergyDeposit();
		fEventAction->AddEnergyDep_4(edep_4);
	}

	if (volume == fScoringVolume_5)
	{
		G4double edep_5 = step->GetTotalEnergyDeposit();
		fEventAction->AddEnergyDep_5(edep_5);
	}

	if (volume == fScoringVolume_6)
	{
		G4double edep_6 = step->GetTotalEnergyDeposit();
		fEventAction->AddEnergyDep_6(edep_6);
	}

	if (volume == fScoringVolume_7)
	{
		G4double edep_7 = step->GetTotalEnergyDeposit();
		fEventAction->AddEnergyDep_7(edep_7);
	}

	if (volume == fScoringVolume_8)
	{
		G4double edep_8 = step->GetTotalEnergyDeposit();
		fEventAction->AddEnergyDep_8(edep_8);
	}

	if (volume == fScoringVolume_9)
	{
		G4double edep_9 = step->GetTotalEnergyDeposit();
		fEventAction->AddEnergyDep_9(edep_9);
	}

	if (volume == fScoringVolume_10)
	{
		G4double edep_10 = step->GetTotalEnergyDeposit();
		fEventAction->AddEnergyDep_10(edep_10);
	}

	if (volume == fScoringVolume_11)
	{
		G4double edep_11 = step->GetTotalEnergyDeposit();
		fEventAction->AddEnergyDep_11(edep_11);
	}

	if (volume == fScoringVolume_12)
	{
		G4double edep_12 = step->GetTotalEnergyDeposit();
		fEventAction->AddEnergyDep_12(edep_12);
	}

	if (volume == fScoringVolume_13)
	{
		G4double edep_13 = step->GetTotalEnergyDeposit();
		fEventAction->AddEnergyDep_13(edep_13);
	}

	if (volume == fScoringVolume_14)
	{
		G4double edep_14 = step->GetTotalEnergyDeposit();
		fEventAction->AddEnergyDep_14(edep_14);
	}

	if (volume == fScoringVolume_15)
	{
		G4double edep_15 = step->GetTotalEnergyDeposit();
		fEventAction->AddEnergyDep_15(edep_15);
	}

	if (volume == fScoringVolume_16)
	{
		G4double edep_16 = step->GetTotalEnergyDeposit();
		fEventAction->AddEnergyDep_16(edep_16);
	}

	if (volume == fScoringVolume_17)
	{
		G4double edep_17 = step->GetTotalEnergyDeposit();
		fEventAction->AddEnergyDep_17(edep_17);
	}

	if (volume == fScoringVolume_18)
	{
		G4double edep_18 = step->GetTotalEnergyDeposit();
		fEventAction->AddEnergyDep_18(edep_18);
	}

	if (volume == fScoringVolume_19)
	{
		G4double edep_19 = step->GetTotalEnergyDeposit();
		fEventAction->AddEnergyDep_19(edep_19);
	}

	if (volume == fScoringVolume_20)
	{
		G4double edep_20 = step->GetTotalEnergyDeposit();
		fEventAction->AddEnergyDep_20(edep_20);
	}

	if (volume == fScoringVolume_21)
	{
		G4double edep_21 = step->GetTotalEnergyDeposit();
		fEventAction->AddEnergyDep_21(edep_21);
	}

	if (volume == fScoringVolume_22)
	{
		G4double edep_22 = step->GetTotalEnergyDeposit();
		fEventAction->AddEnergyDep_22(edep_22);
	}

	if (volume == fScoringVolume_22)
	{
		G4double edep_23 = step->GetTotalEnergyDeposit();
		fEventAction->AddEnergyDep_23(edep_23);
	}

	if (volume == fScoringVolume_24)
	{
		G4double edep_24 = step->GetTotalEnergyDeposit();
		fEventAction->AddEnergyDep_24(edep_24);
	}

	if (volume == fScoringVolume_25)
	{
		G4double edep_25 = step->GetTotalEnergyDeposit();
		fEventAction->AddEnergyDep_25(edep_25);
	}
}