#include "event.hh"
#include "G4AccumulableManager.hh"
#include "G4RunManager.hh"
#include "construction.hh"
#include "G4UnitsTable.hh"
#include "G4SystemOfUnits.hh"

MyEventAction::MyEventAction(MyRunAction*)
{
	fEdep_0 = 0.;
	i_0 = 0;
	TotalEdep_0 = 0;
	TotalDose_0 = 0;
	AvgEdep_0 = 0;
	AvgDose_0 = 0;

	fEdep_1 = 0.;
	i_1 = 0;
	TotalEdep_1 = 0;
	TotalDose_1 = 0;
	AvgEdep_1 = 0;
	AvgDose_1 = 0;

	fEdep_2 = 0.;
	i_2 = 0;
	TotalEdep_2 = 0;
	TotalDose_2 = 0;
	AvgEdep_2 = 0;
	AvgDose_2 = 0;

	fEdep_3 = 0.;
	i_3 = 0;
	TotalEdep_3 = 0;
	TotalDose_3 = 0;
	AvgEdep_3 = 0;
	AvgDose_3 = 0;

	fEdep_4 = 0.;
	i_4 = 0;
	TotalEdep_4 = 0;
	TotalDose_4 = 0;
	AvgEdep_4 = 0;
	AvgDose_4 = 0;

	fEdep_5 = 0.;
	i_5 = 0;
	TotalEdep_5 = 0;
	TotalDose_5 = 0;
	AvgEdep_5 = 0;
	AvgDose_5 = 0;

	fEdep_6 = 0.;
	i_6 = 0;
	TotalEdep_6 = 0;
	TotalDose_6 = 0;
	AvgEdep_6 = 0;
	AvgDose_6 = 0;

	fEdep_7 = 0.;
	i_7 = 0;
	TotalEdep_7 = 0;
	TotalDose_7 = 0;
	AvgEdep_7 = 0;
	AvgDose_7 = 0;

	fEdep_8 = 0.;
	i_8 = 0;
	TotalEdep_8 = 0;
	TotalDose_8 = 0;
	AvgEdep_8 = 0;
	AvgDose_8 = 0;

	fEdep_9 = 0.;
	i_9 = 0;
	TotalEdep_9 = 0;
	TotalDose_9 = 0;
	AvgEdep_9 = 0;
	AvgDose_9 = 0;

	fEdep_10 = 0.;
	i_10 = 0;
	TotalEdep_10 = 0;
	TotalDose_10 = 0;
	AvgEdep_10 = 0;
	AvgDose_10 = 0;

	fEdep_11 = 0.;
	i_11 = 0;
	TotalEdep_11 = 0;
	TotalDose_11 = 0;
	AvgEdep_11 = 0;
	AvgDose_11 = 0;

	fEdep_12 = 0.;
	i_12 = 0;
	TotalEdep_12 = 0;
	TotalDose_12 = 0;
	AvgEdep_12 = 0;
	AvgDose_12 = 0;

	fEdep_13 = 0.;
	i_13 = 0;
	TotalEdep_13 = 0;
	TotalDose_13 = 0;
	AvgEdep_13 = 0;
	AvgDose_13 = 0;

	fEdep_14 = 0.;
	i_14 = 0;
	TotalEdep_14 = 0;
	TotalDose_14 = 0;
	AvgEdep_14 = 0;
	AvgDose_14 = 0;

	fEdep_15 = 0.;
	i_15 = 0;
	TotalEdep_15 = 0;
	TotalDose_15 = 0;
	AvgEdep_15 = 0;
	AvgDose_15 = 0;

	fEdep_16 = 0.;
	i_16 = 0;
	TotalEdep_16 = 0;
	TotalDose_16 = 0;
	AvgEdep_16 = 0;
	AvgDose_16 = 0;

	fEdep_17 = 0.;
	i_17 = 0;
	TotalEdep_17 = 0;
	TotalDose_17 = 0;
	AvgEdep_17 = 0;
	AvgDose_17 = 0;

	fEdep_18 = 0.;
	i_18 = 0;
	TotalEdep_18 = 0;
	TotalDose_18 = 0;
	AvgEdep_18 = 0;
	AvgDose_18 = 0;

	fEdep_19 = 0.;
	i_19 = 0;
	TotalEdep_19 = 0;
	TotalDose_19 = 0;
	AvgEdep_19 = 0;
	AvgDose_19 = 0;

	fEdep_20 = 0.;
	i_20 = 0;
	TotalEdep_20 = 0;
	TotalDose_20 = 0;
	AvgEdep_20 = 0;
	AvgDose_20 = 0;

	fEdep_21 = 0.;
	i_21 = 0;
	TotalEdep_21 = 0;
	TotalDose_21 = 0;
	AvgEdep_21 = 0;
	AvgDose_21 = 0;

	fEdep_22 = 0.;
	i_22 = 0;
	TotalEdep_22 = 0;
	TotalDose_22 = 0;
	AvgEdep_22 = 0;
	AvgDose_22 = 0;

	fEdep_23 = 0.;
	i_23 = 0;
	TotalEdep_23 = 0;
	TotalDose_23 = 0;
	AvgEdep_23 = 0;
	AvgDose_23 = 0;

	fEdep_24 = 0.;
	i_24 = 0;
	TotalEdep_24 = 0;
	TotalDose_24 = 0;
	AvgEdep_24 = 0;
	AvgDose_24 = 0;

	fEdep_25 = 0.;
	i_25 = 0;
	TotalEdep_25 = 0;
	TotalDose_25 = 0;
	AvgEdep_25 = 0;
	AvgDose_25 = 0;
}

MyEventAction::~MyEventAction()
{}

void MyEventAction::BeginOfEventAction(const G4Event*)
{
	fEdep_0 = 0.;
	fEdep_1 = 0.;
	fEdep_2 = 0.;
	fEdep_3 = 0.;
	fEdep_4 = 0.;
	fEdep_5 = 0.;
	fEdep_6 = 0.;
	fEdep_7 = 0.;
	fEdep_8 = 0.;
	fEdep_9 = 0.;
	fEdep_10 = 0.;

	fEdep_11 = 0.;
	fEdep_12 = 0.;
	fEdep_13 = 0.;
	fEdep_14 = 0.;
	fEdep_15 = 0.;
	fEdep_16 = 0.;
	fEdep_17 = 0.;
	fEdep_18 = 0.;
	fEdep_19 = 0.;
	fEdep_20 = 0.;
	fEdep_21 = 0.;
	fEdep_22 = 0.;
	fEdep_23 = 0.;
	fEdep_24 = 0.;
	fEdep_25 = 0.;
}

void MyEventAction::EndOfEventAction(const G4Event*)
{
	G4AnalysisManager* man = G4AnalysisManager::Instance();

	const MyDetectorConstruction* detectorConstruction
		= static_cast<const MyDetectorConstruction*>
		(G4RunManager::GetRunManager()->GetUserDetectorConstruction());

	G4double mass_0 = detectorConstruction->GetScoringVolume_0()->GetMass();
	G4double mass_1 = detectorConstruction->GetScoringVolume_1()->GetMass();
	G4double mass_2 = detectorConstruction->GetScoringVolume_2()->GetMass();
	G4double mass_3 = detectorConstruction->GetScoringVolume_3()->GetMass();
	G4double mass_4 = detectorConstruction->GetScoringVolume_4()->GetMass();
	G4double mass_5 = detectorConstruction->GetScoringVolume_5()->GetMass();
	G4double mass_6 = detectorConstruction->GetScoringVolume_6()->GetMass();
	G4double mass_7 = detectorConstruction->GetScoringVolume_7()->GetMass();
	G4double mass_8 = detectorConstruction->GetScoringVolume_8()->GetMass();
	G4double mass_9 = detectorConstruction->GetScoringVolume_9()->GetMass();
	G4double mass_10 = detectorConstruction->GetScoringVolume_10()->GetMass();

	G4double mass_11 = detectorConstruction->GetScoringVolume_11()->GetMass();
	G4double mass_12 = detectorConstruction->GetScoringVolume_12()->GetMass();
	G4double mass_13 = detectorConstruction->GetScoringVolume_13()->GetMass();
	G4double mass_14 = detectorConstruction->GetScoringVolume_14()->GetMass();
	G4double mass_15 = detectorConstruction->GetScoringVolume_15()->GetMass();
	G4double mass_16 = detectorConstruction->GetScoringVolume_16()->GetMass();
	G4double mass_17 = detectorConstruction->GetScoringVolume_17()->GetMass();
	G4double mass_18 = detectorConstruction->GetScoringVolume_18()->GetMass();
	G4double mass_19 = detectorConstruction->GetScoringVolume_19()->GetMass();
	G4double mass_20 = detectorConstruction->GetScoringVolume_20()->GetMass();
	G4double mass_21 = detectorConstruction->GetScoringVolume_21()->GetMass();
	G4double mass_22 = detectorConstruction->GetScoringVolume_22()->GetMass();
	G4double mass_23 = detectorConstruction->GetScoringVolume_23()->GetMass();
	G4double mass_24 = detectorConstruction->GetScoringVolume_24()->GetMass();
	G4double mass_25 = detectorConstruction->GetScoringVolume_25()->GetMass();

	if (fEdep_0 != 0)
	{
		G4double mass_0_g = mass_0 / (6.24153e21);
		G4double erg_0 = fEdep_0 / 624151;
		G4double dose_rad_si_0 = erg_0 / mass_0_g / 100;

		i_0 = i_0 + 1;
		TotalEdep_0 = fEdep_0 + TotalEdep_0;
		TotalDose_0 = dose_rad_si_0 + TotalDose_0;
		// i counter and totals really only work on singlethreading

		AvgEdep_0 = TotalEdep_0 * mass_0_g / i_0;
		AvgDose_0 = TotalDose_0 / i_0;

		man->FillNtupleDColumn(0, 0, i_0);
		man->FillNtupleDColumn(0, 1, fEdep_0);
		man->FillNtupleDColumn(0, 2, dose_rad_si_0);
		man->FillNtupleDColumn(0, 3, TotalEdep_0);
		man->FillNtupleDColumn(0, 4, TotalDose_0);
		man->FillNtupleDColumn(0, 5, AvgEdep_0);
		man->FillNtupleDColumn(0, 6, AvgDose_0);
		man->AddNtupleRow(0);
	}
	
	if (fEdep_1 != 0)
	{
		G4double mass_1_g = mass_1 / (6.24153e21);
		G4double erg_1 = fEdep_1 / 624151;
		G4double dose_rad_si_1 = erg_1 / mass_1_g / 100;

		i_1 = i_1 + 1;
		TotalEdep_1 = fEdep_1 + TotalEdep_1;
		TotalDose_1 = dose_rad_si_1 + TotalDose_1;
		// i counter and totals really only work on singlethreading

		AvgEdep_1 = TotalEdep_1 * mass_1_g / i_1;
		AvgDose_1 = TotalDose_1 / i_1;

		man->FillNtupleDColumn(1, 0, i_1);
		man->FillNtupleDColumn(1, 1, fEdep_1);
		man->FillNtupleDColumn(1, 2, dose_rad_si_1);
		man->FillNtupleDColumn(1, 3, TotalEdep_1);
		man->FillNtupleDColumn(1, 4, TotalDose_1);
		man->FillNtupleDColumn(1, 5, AvgEdep_1);
		man->FillNtupleDColumn(1, 6, AvgDose_1);
		man->AddNtupleRow(1);
	}

	if (fEdep_2 != 0)
	{
		G4double mass_2_g = mass_2 / (6.24153e21);
		G4double erg_2 = fEdep_2 / 624151;
		G4double dose_rad_si_2 = erg_2 / mass_2_g / 100;

		i_2 = i_2 + 1;
		TotalEdep_2 = fEdep_2 + TotalEdep_2;
		TotalDose_2 = dose_rad_si_2 + TotalDose_2;
		// i counter and totals really only work on singlethreading

		AvgEdep_2 = TotalEdep_2 * mass_2_g / i_2;
		AvgDose_2 = TotalDose_2 / i_2;

		man->FillNtupleDColumn(2, 0, i_2);
		man->FillNtupleDColumn(2, 1, fEdep_2);
		man->FillNtupleDColumn(2, 2, dose_rad_si_2);
		man->FillNtupleDColumn(2, 3, TotalEdep_2);
		man->FillNtupleDColumn(2, 4, TotalDose_2);
		man->FillNtupleDColumn(2, 5, AvgEdep_2);
		man->FillNtupleDColumn(2, 6, AvgDose_2);
		man->AddNtupleRow(2);
	}

	if (fEdep_3 != 0)
	{
		G4double mass_3_g = mass_3 / (6.24153e21);
		G4double erg_3 = fEdep_3 / 624151;
		G4double dose_rad_si_3 = erg_3 / mass_3_g / 100;

		i_3 = i_3 + 1;
		TotalEdep_3 = fEdep_3 + TotalEdep_3;
		TotalDose_3 = dose_rad_si_3 + TotalDose_3;
		// i counter and totals really only work on singlethreading

		AvgEdep_3 = TotalEdep_3 * mass_3_g / i_3;
		AvgDose_3 = TotalDose_3 / i_3;

		man->FillNtupleDColumn(3, 0, i_3);
		man->FillNtupleDColumn(3, 1, fEdep_3);
		man->FillNtupleDColumn(3, 2, dose_rad_si_3);
		man->FillNtupleDColumn(3, 3, TotalEdep_3);
		man->FillNtupleDColumn(3, 4, TotalDose_3);
		man->FillNtupleDColumn(3, 5, AvgEdep_3);
		man->FillNtupleDColumn(3, 6, AvgDose_3);
		man->AddNtupleRow(3);
	}

	if (fEdep_4 != 0)
	{
		G4double mass_4_g = mass_4 / (6.24153e21);
		G4double erg_4 = fEdep_4 / 624151;
		G4double dose_rad_si_4 = erg_4 / mass_4_g / 100;

		i_4 = i_4 + 1;
		TotalEdep_4 = fEdep_4 + TotalEdep_4;
		TotalDose_4 = dose_rad_si_4 + TotalDose_4;
		// i counter and totals really only work on singlethreading

		AvgEdep_4 = TotalEdep_4 * mass_4_g / i_4;
		AvgDose_4 = TotalDose_4 / i_4;

		man->FillNtupleDColumn(4, 0, i_4);
		man->FillNtupleDColumn(4, 1, fEdep_4);
		man->FillNtupleDColumn(4, 2, dose_rad_si_4);
		man->FillNtupleDColumn(4, 3, TotalEdep_4);
		man->FillNtupleDColumn(4, 4, TotalDose_4);
		man->FillNtupleDColumn(4, 5, AvgEdep_4);
		man->FillNtupleDColumn(4, 6, AvgDose_4);
		man->AddNtupleRow(4);
	}

	if (fEdep_5 != 0)
	{
		G4double mass_5_g = mass_5 / (6.24153e21);
		G4double erg_5 = fEdep_5 / 624151;
		G4double dose_rad_si_5 = erg_5 / mass_5_g / 100;

		i_5 = i_5 + 1;
		TotalEdep_5 = fEdep_5 + TotalEdep_5;
		TotalDose_5 = dose_rad_si_5 + TotalDose_5;
		// i counter and totals really only work on singlethreading

		AvgEdep_5 = TotalEdep_5 * mass_5_g / i_5;
		AvgDose_5 = TotalDose_5 / i_5;

		man->FillNtupleDColumn(5, 0, i_5);
		man->FillNtupleDColumn(5, 1, fEdep_5);
		man->FillNtupleDColumn(5, 2, dose_rad_si_5);
		man->FillNtupleDColumn(5, 3, TotalEdep_5);
		man->FillNtupleDColumn(5, 4, TotalDose_5);
		man->FillNtupleDColumn(5, 5, AvgEdep_5);
		man->FillNtupleDColumn(5, 6, AvgDose_5);
		man->AddNtupleRow(5);
	}

	if (fEdep_6 != 0)
	{
		G4double mass_6_g = mass_6 / (6.24153e21);
		G4double erg_6 = fEdep_6 / 624151;
		G4double dose_rad_si_6 = erg_6 / mass_6_g / 100;

		i_6 = i_6 + 1;
		TotalEdep_6 = fEdep_6 + TotalEdep_6;
		TotalDose_6 = dose_rad_si_6 + TotalDose_6;
		// i counter and totals really only work on singlethreading

		AvgEdep_6 = TotalEdep_6 * mass_6_g / i_6;
		AvgDose_6 = TotalDose_6 / i_6;

		man->FillNtupleDColumn(6, 0, i_6);
		man->FillNtupleDColumn(6, 1, fEdep_6);
		man->FillNtupleDColumn(6, 2, dose_rad_si_6);
		man->FillNtupleDColumn(6, 3, TotalEdep_6);
		man->FillNtupleDColumn(6, 4, TotalDose_6);
		man->FillNtupleDColumn(6, 5, AvgEdep_6);
		man->FillNtupleDColumn(6, 6, AvgDose_6);
		man->AddNtupleRow(6);
	}

	if (fEdep_7 != 0)
	{
		G4double mass_7_g = mass_7 / (6.24153e21);
		G4double erg_7 = fEdep_7 / 624151;
		G4double dose_rad_si_7 = erg_7 / mass_7_g / 100;

		i_7 = i_7 + 1;
		TotalEdep_7 = fEdep_7 + TotalEdep_7;
		TotalDose_7 = dose_rad_si_7 + TotalDose_7;
		// i counter and totals really only work on singlethreading

		AvgEdep_7 = TotalEdep_7 * mass_7_g / i_7;
		AvgDose_7 = TotalDose_7 / i_7;

		man->FillNtupleDColumn(7, 0, i_7);
		man->FillNtupleDColumn(7, 1, fEdep_7);
		man->FillNtupleDColumn(7, 2, dose_rad_si_7);
		man->FillNtupleDColumn(7, 3, TotalEdep_7);
		man->FillNtupleDColumn(7, 4, TotalDose_7);
		man->FillNtupleDColumn(7, 5, AvgEdep_7);
		man->FillNtupleDColumn(7, 6, AvgDose_7);
		man->AddNtupleRow(7);
	}

	if (fEdep_8 != 0)
	{
		G4double mass_8_g = mass_8 / (6.24153e21);
		G4double erg_8 = fEdep_8 / 624151;
		G4double dose_rad_si_8 = erg_8 / mass_8_g / 100;

		i_8 = i_8 + 1;
		TotalEdep_8 = fEdep_8 + TotalEdep_8;
		TotalDose_8 = dose_rad_si_8 + TotalDose_8;
		// i counter and totals really only work on singlethreading

		AvgEdep_8 = TotalEdep_8 * mass_8_g / i_8;
		AvgDose_8 = TotalDose_8 / i_8;

		man->FillNtupleDColumn(8, 0, i_8);
		man->FillNtupleDColumn(8, 1, fEdep_8);
		man->FillNtupleDColumn(8, 2, dose_rad_si_8);
		man->FillNtupleDColumn(8, 3, TotalEdep_8);
		man->FillNtupleDColumn(8, 4, TotalDose_8);
		man->FillNtupleDColumn(8, 5, AvgEdep_8);
		man->FillNtupleDColumn(8, 6, AvgDose_8);
		man->AddNtupleRow(8);
	}

	if (fEdep_9 != 0)
	{
		G4double mass_9_g = mass_9 / (6.24153e21);
		G4double erg_9 = fEdep_9 / 624151;
		G4double dose_rad_si_9 = erg_9 / mass_9_g / 100;

		i_9 = i_9 + 1;
		TotalEdep_9 = fEdep_9 + TotalEdep_9;
		TotalDose_9 = dose_rad_si_9 + TotalDose_9;
		// i counter and totals really only work on singlethreading

		AvgEdep_9 = TotalEdep_9 * mass_9_g / i_9;
		AvgDose_9 = TotalDose_9 / i_9;

		man->FillNtupleDColumn(9, 0, i_9);
		man->FillNtupleDColumn(9, 1, fEdep_9);
		man->FillNtupleDColumn(9, 2, dose_rad_si_9);
		man->FillNtupleDColumn(9, 3, TotalEdep_9);
		man->FillNtupleDColumn(9, 4, TotalDose_9);
		man->FillNtupleDColumn(9, 5, AvgEdep_9);
		man->FillNtupleDColumn(9, 6, AvgDose_9);
		man->AddNtupleRow(9);
	}

	if (fEdep_10 != 0)
	{
		G4double mass_10_g = mass_10 / (6.24153e21);
		G4double erg_10 = fEdep_10 / 624151;
		G4double dose_rad_si_10 = erg_10 / mass_10_g / 100;

		i_10 = i_10 + 1;
		TotalEdep_10 = fEdep_10 + TotalEdep_10;
		TotalDose_10 = dose_rad_si_10 + TotalDose_10;
		// i counter and totals really only work on singlethreading

		AvgEdep_10 = TotalEdep_10 * mass_10_g / i_10;
		AvgDose_10 = TotalDose_10 / i_10;

		man->FillNtupleDColumn(10, 0, i_10);
		man->FillNtupleDColumn(10, 1, fEdep_10);
		man->FillNtupleDColumn(10, 2, dose_rad_si_10);
		man->FillNtupleDColumn(10, 3, TotalEdep_10);
		man->FillNtupleDColumn(10, 4, TotalDose_10);
		man->FillNtupleDColumn(10, 5, AvgEdep_10);
		man->FillNtupleDColumn(10, 6, AvgDose_10);
		man->AddNtupleRow(10);
	}

	if (fEdep_11 != 0)
	{
		G4double mass_11_g = mass_11 / (6.24153e21);
		G4double erg_11 = fEdep_11 / 624151;
		G4double dose_rad_si_11 = erg_11 / mass_11_g / 100;

		i_11 = i_11 + 1;
		TotalEdep_11 = fEdep_11 + TotalEdep_11;
		TotalDose_11 = dose_rad_si_11 + TotalDose_11;
		// i counter and totals really only work on singlethreading

		AvgEdep_11 = TotalEdep_11 * mass_11_g / i_11;
		AvgDose_11 = TotalDose_11 / i_11;

		man->FillNtupleDColumn(11, 0, i_11);
		man->FillNtupleDColumn(11, 1, fEdep_11);
		man->FillNtupleDColumn(11, 2, dose_rad_si_11);
		man->FillNtupleDColumn(11, 3, TotalEdep_11);
		man->FillNtupleDColumn(11, 4, TotalDose_11);
		man->FillNtupleDColumn(11, 5, AvgEdep_11);
		man->FillNtupleDColumn(11, 6, AvgDose_11);
		man->AddNtupleRow(11);
	}

	if (fEdep_12 != 0)
	{
		G4double mass_12_g = mass_12 / (6.24153e21);
		G4double erg_12 = fEdep_12 / 624151;
		G4double dose_rad_si_12 = erg_12 / mass_12_g / 100;

		i_12 = i_12 + 1;
		TotalEdep_12 = fEdep_12 + TotalEdep_12;
		TotalDose_12 = dose_rad_si_12 + TotalDose_12;
		// i counter and totals really only work on singlethreading

		AvgEdep_12 = TotalEdep_12 * mass_12_g / i_12;
		AvgDose_12 = TotalDose_12 / i_12;

		man->FillNtupleDColumn(12, 0, i_12);
		man->FillNtupleDColumn(12, 1, fEdep_12);
		man->FillNtupleDColumn(12, 2, dose_rad_si_12);
		man->FillNtupleDColumn(12, 3, TotalEdep_12);
		man->FillNtupleDColumn(12, 4, TotalDose_12);
		man->FillNtupleDColumn(12, 5, AvgEdep_12);
		man->FillNtupleDColumn(12, 6, AvgDose_12);
		man->AddNtupleRow(12);
	}

	if (fEdep_13 != 0)
	{
		G4double mass_13_g = mass_13 / (6.24153e21);
		G4double erg_13 = fEdep_13 / 624151;
		G4double dose_rad_si_13 = erg_13 / mass_13_g / 100;

		i_13 = i_13 + 1;
		TotalEdep_13 = fEdep_13 + TotalEdep_13;
		TotalDose_13 = dose_rad_si_13 + TotalDose_13;
		// i counter and totals really only work on singlethreading

		AvgEdep_13 = TotalEdep_13 * mass_13_g / i_13;
		AvgDose_13 = TotalDose_13 / i_13;

		man->FillNtupleDColumn(13, 0, i_13);
		man->FillNtupleDColumn(13, 1, fEdep_13);
		man->FillNtupleDColumn(13, 2, dose_rad_si_13);
		man->FillNtupleDColumn(13, 3, TotalEdep_13);
		man->FillNtupleDColumn(13, 4, TotalDose_13);
		man->FillNtupleDColumn(13, 5, AvgEdep_13);
		man->FillNtupleDColumn(13, 6, AvgDose_13);
		man->AddNtupleRow(13);
	}

	if (fEdep_14 != 0)
	{
		G4double mass_14_g = mass_14 / (6.24153e21);
		G4double erg_14 = fEdep_14 / 624151;
		G4double dose_rad_si_14 = erg_14 / mass_14_g / 100;

		i_14 = i_14 + 1;
		TotalEdep_14 = fEdep_14 + TotalEdep_14;
		TotalDose_14 = dose_rad_si_14 + TotalDose_14;
		// i counter and totals really only work on singlethreading

		AvgEdep_14 = TotalEdep_14 * mass_14_g / i_14;
		AvgDose_14 = TotalDose_14 / i_14;

		man->FillNtupleDColumn(14, 0, i_14);
		man->FillNtupleDColumn(14, 1, fEdep_14);
		man->FillNtupleDColumn(14, 2, dose_rad_si_14);
		man->FillNtupleDColumn(14, 3, TotalEdep_14);
		man->FillNtupleDColumn(14, 4, TotalDose_14);
		man->FillNtupleDColumn(14, 5, AvgEdep_14);
		man->FillNtupleDColumn(14, 6, AvgDose_14);
		man->AddNtupleRow(14);
	}

	if (fEdep_15 != 0)
	{
		G4double mass_15_g = mass_15 / (6.24153e21);
		G4double erg_15 = fEdep_15 / 624151;
		G4double dose_rad_si_15 = erg_15 / mass_15_g / 100;

		i_15 = i_15 + 1;
		TotalEdep_15 = fEdep_15 + TotalEdep_15;
		TotalDose_15 = dose_rad_si_15 + TotalDose_15;
		// i counter and totals really only work on singlethreading

		AvgEdep_15 = TotalEdep_15 * mass_15_g / i_15;
		AvgDose_15 = TotalDose_15 / i_15;

		man->FillNtupleDColumn(15, 0, i_15);
		man->FillNtupleDColumn(15, 1, fEdep_15);
		man->FillNtupleDColumn(15, 2, dose_rad_si_15);
		man->FillNtupleDColumn(15, 3, TotalEdep_15);
		man->FillNtupleDColumn(15, 4, TotalDose_15);
		man->FillNtupleDColumn(15, 5, AvgEdep_15);
		man->FillNtupleDColumn(15, 6, AvgDose_15);
		man->AddNtupleRow(15);
	}

	if (fEdep_16 != 0)
	{
		G4double mass_16_g = mass_16 / (6.24153e21);
		G4double erg_16 = fEdep_16 / 624151;
		G4double dose_rad_si_16 = erg_16 / mass_16_g / 100;

		i_16 = i_16 + 1;
		TotalEdep_16 = fEdep_16 + TotalEdep_16;
		TotalDose_16 = dose_rad_si_16 + TotalDose_16;
		// i counter and totals really only work on singlethreading

		AvgEdep_16 = TotalEdep_16 * mass_16_g / i_16;
		AvgDose_16 = TotalDose_16 / i_16;

		man->FillNtupleDColumn(16, 0, i_16);
		man->FillNtupleDColumn(16, 1, fEdep_16);
		man->FillNtupleDColumn(16, 2, dose_rad_si_16);
		man->FillNtupleDColumn(16, 3, TotalEdep_16);
		man->FillNtupleDColumn(16, 4, TotalDose_16);
		man->FillNtupleDColumn(16, 5, AvgEdep_16);
		man->FillNtupleDColumn(16, 6, AvgDose_16);
		man->AddNtupleRow(16);
	}

	if (fEdep_17 != 0)
	{
		G4double mass_17_g = mass_17 / (6.24153e21);
		G4double erg_17 = fEdep_17 / 624151;
		G4double dose_rad_si_17 = erg_17 / mass_17_g / 100;

		i_17 = i_17 + 1;
		TotalEdep_17 = fEdep_17 + TotalEdep_17;
		TotalDose_17 = dose_rad_si_17 + TotalDose_17;
		// i counter and totals really only work on singlethreading

		AvgEdep_17 = TotalEdep_17 * mass_17_g / i_17;
		AvgDose_17 = TotalDose_17 / i_17;

		man->FillNtupleDColumn(17, 0, i_17);
		man->FillNtupleDColumn(17, 1, fEdep_17);
		man->FillNtupleDColumn(17, 2, dose_rad_si_17);
		man->FillNtupleDColumn(17, 3, TotalEdep_17);
		man->FillNtupleDColumn(17, 4, TotalDose_17);
		man->FillNtupleDColumn(17, 5, AvgEdep_17);
		man->FillNtupleDColumn(17, 6, AvgDose_17);
		man->AddNtupleRow(17);
	}

	if (fEdep_18 != 0)
	{
		G4double mass_18_g = mass_18 / (6.24153e21);
		G4double erg_18 = fEdep_18 / 624151;
		G4double dose_rad_si_18 = erg_18 / mass_18_g / 100;

		i_18 = i_18 + 1;
		TotalEdep_18 = fEdep_18 + TotalEdep_18;
		TotalDose_18 = dose_rad_si_18 + TotalDose_18;
		// i counter and totals really only work on singlethreading

		AvgEdep_18 = TotalEdep_18 * mass_18_g / i_18;
		AvgDose_18 = TotalDose_18 / i_18;

		man->FillNtupleDColumn(18, 0, i_18);
		man->FillNtupleDColumn(18, 1, fEdep_18);
		man->FillNtupleDColumn(18, 2, dose_rad_si_18);
		man->FillNtupleDColumn(18, 3, TotalEdep_18);
		man->FillNtupleDColumn(18, 4, TotalDose_18);
		man->FillNtupleDColumn(18, 5, AvgEdep_18);
		man->FillNtupleDColumn(18, 6, AvgDose_18);
		man->AddNtupleRow(18);
	}

	if (fEdep_19 != 0)
	{
		G4double mass_19_g = mass_19 / (6.24153e21);
		G4double erg_19 = fEdep_19 / 624151;
		G4double dose_rad_si_19 = erg_19 / mass_19_g / 100;

		i_19 = i_19 + 1;
		TotalEdep_19 = fEdep_19 + TotalEdep_19;
		TotalDose_19 = dose_rad_si_19 + TotalDose_19;
		// i counter and totals really only work on singlethreading

		AvgEdep_19 = TotalEdep_19 * mass_19_g / i_19;
		AvgDose_19 = TotalDose_19 / i_19;

		man->FillNtupleDColumn(19, 0, i_19);
		man->FillNtupleDColumn(19, 1, fEdep_19);
		man->FillNtupleDColumn(19, 2, dose_rad_si_19);
		man->FillNtupleDColumn(19, 3, TotalEdep_19);
		man->FillNtupleDColumn(19, 4, TotalDose_19);
		man->FillNtupleDColumn(19, 5, AvgEdep_19);
		man->FillNtupleDColumn(19, 6, AvgDose_19);
		man->AddNtupleRow(19);
	}

	if (fEdep_20 != 0)
	{
		G4double mass_20_g = mass_20 / (6.24153e21);
		G4double erg_20 = fEdep_20 / 624151;
		G4double dose_rad_si_20 = erg_20 / mass_20_g / 100;

		i_20 = i_20 + 1;
		TotalEdep_20 = fEdep_20 + TotalEdep_20;
		TotalDose_20 = dose_rad_si_20 + TotalDose_20;
		// i counter and totals really only work on singlethreading

		AvgEdep_20 = TotalEdep_20 * mass_20_g / i_20;
		AvgDose_20 = TotalDose_20 / i_20;

		man->FillNtupleDColumn(20, 0, i_20);
		man->FillNtupleDColumn(20, 1, fEdep_20);
		man->FillNtupleDColumn(20, 2, dose_rad_si_20);
		man->FillNtupleDColumn(20, 3, TotalEdep_20);
		man->FillNtupleDColumn(20, 4, TotalDose_20);
		man->FillNtupleDColumn(20, 5, AvgEdep_20);
		man->FillNtupleDColumn(20, 6, AvgDose_20);
		man->AddNtupleRow(20);
	}

	if (fEdep_21 != 0)
	{
		G4double mass_21_g = mass_21 / (6.24153e21);
		G4double erg_21 = fEdep_21 / 624151;
		G4double dose_rad_si_21 = erg_21 / mass_21_g / 100;

		i_21 = i_21 + 1;
		TotalEdep_21 = fEdep_21 + TotalEdep_21;
		TotalDose_21 = dose_rad_si_21 + TotalDose_21;
		// i counter and totals really only work on singlethreading

		AvgEdep_21 = TotalEdep_21 * mass_21_g / i_21;
		AvgDose_21 = TotalDose_21 / i_21;

		man->FillNtupleDColumn(21, 0, i_21);
		man->FillNtupleDColumn(21, 1, fEdep_21);
		man->FillNtupleDColumn(21, 2, dose_rad_si_21);
		man->FillNtupleDColumn(21, 3, TotalEdep_21);
		man->FillNtupleDColumn(21, 4, TotalDose_21);
		man->FillNtupleDColumn(21, 5, AvgEdep_21);
		man->FillNtupleDColumn(21, 6, AvgDose_21);
		man->AddNtupleRow(21);
	}

	if (fEdep_22 != 0)
	{
		G4double mass_22_g = mass_22 / (6.24153e21);
		G4double erg_22 = fEdep_22 / 624151;
		G4double dose_rad_si_22 = erg_22 / mass_22_g / 100;

		i_22 = i_22 + 1;
		TotalEdep_22 = fEdep_22 + TotalEdep_22;
		TotalDose_22 = dose_rad_si_22 + TotalDose_22;
		// i counter and totals really only work on singlethreading

		AvgEdep_22 = TotalEdep_22 * mass_22_g / i_22;
		AvgDose_22 = TotalDose_22 / i_22;

		man->FillNtupleDColumn(22, 0, i_22);
		man->FillNtupleDColumn(22, 1, fEdep_22);
		man->FillNtupleDColumn(22, 2, dose_rad_si_22);
		man->FillNtupleDColumn(22, 3, TotalEdep_22);
		man->FillNtupleDColumn(22, 4, TotalDose_22);
		man->FillNtupleDColumn(22, 5, AvgEdep_22);
		man->FillNtupleDColumn(22, 6, AvgDose_22);
		man->AddNtupleRow(22);
	}

	if (fEdep_23 != 0)
	{
		G4double mass_23_g = mass_23 / (6.24153e21);
		G4double erg_23 = fEdep_23 / 624151;
		G4double dose_rad_si_23 = erg_23 / mass_23_g / 100;

		i_23 = i_23 + 1;
		TotalEdep_23 = fEdep_23 + TotalEdep_23;
		TotalDose_23 = dose_rad_si_23 + TotalDose_23;
		// i counter and totals really only work on singlethreading

		AvgEdep_23 = TotalEdep_23 * mass_23_g / i_23;
		AvgDose_23 = TotalDose_23 / i_23;

		man->FillNtupleDColumn(23, 0, i_23);
		man->FillNtupleDColumn(23, 1, fEdep_23);
		man->FillNtupleDColumn(23, 2, dose_rad_si_23);
		man->FillNtupleDColumn(23, 3, TotalEdep_23);
		man->FillNtupleDColumn(23, 4, TotalDose_23);
		man->FillNtupleDColumn(23, 5, AvgEdep_23);
		man->FillNtupleDColumn(23, 6, AvgDose_23);
		man->AddNtupleRow(23);
	}

	if (fEdep_24 != 0)
	{
		G4double mass_24_g = mass_24 / (6.24153e21);
		G4double erg_24 = fEdep_24 / 624151;
		G4double dose_rad_si_24 = erg_24 / mass_24_g / 100;

		i_24 = i_24 + 1;
		TotalEdep_24 = fEdep_24 + TotalEdep_24;
		TotalDose_24 = dose_rad_si_24 + TotalDose_24;
		// i counter and totals really only work on singlethreading

		AvgEdep_24 = TotalEdep_24 * mass_24_g / i_24;
		AvgDose_24 = TotalDose_24 / i_24;

		man->FillNtupleDColumn(24, 0, i_24);
		man->FillNtupleDColumn(24, 1, fEdep_24);
		man->FillNtupleDColumn(24, 2, dose_rad_si_24);
		man->FillNtupleDColumn(24, 3, TotalEdep_24);
		man->FillNtupleDColumn(24, 4, TotalDose_24);
		man->FillNtupleDColumn(24, 5, AvgEdep_24);
		man->FillNtupleDColumn(24, 6, AvgDose_24);
		man->AddNtupleRow(24);
	}

	if (fEdep_25 != 0)
	{
		G4double mass_25_g = mass_25 / (6.24153e21);
		G4double erg_25 = fEdep_25 / 624151;
		G4double dose_rad_si_25 = erg_25 / mass_25_g / 100;

		i_25 = i_25 + 1;
		TotalEdep_25 = fEdep_25 + TotalEdep_25;
		TotalDose_25 = dose_rad_si_25 + TotalDose_25;
		// i counter and totals really only work on singlethreading

		AvgEdep_25 = TotalEdep_25 * mass_25_g / i_25;
		AvgDose_25 = TotalDose_25 / i_25;

		man->FillNtupleDColumn(25, 0, i_25);
		man->FillNtupleDColumn(25, 1, fEdep_25);
		man->FillNtupleDColumn(25, 2, dose_rad_si_25);
		man->FillNtupleDColumn(25, 3, TotalEdep_25);
		man->FillNtupleDColumn(25, 4, TotalDose_25);
		man->FillNtupleDColumn(25, 5, AvgEdep_25);
		man->FillNtupleDColumn(25, 6, AvgDose_25);
		man->AddNtupleRow(25);
	}
}