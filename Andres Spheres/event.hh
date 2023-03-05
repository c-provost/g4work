#ifndef EVENT_HH
#define EVENT_HH

#include "G4UserEventAction.hh"
#include "G4Event.hh"

#include "G4AnalysisManager.hh"

#include "run.hh"

class MyEventAction : public G4UserEventAction
{
public:
	MyEventAction(MyRunAction*);
	~MyEventAction();

	virtual void BeginOfEventAction(const G4Event*);
	virtual void EndOfEventAction(const G4Event*);

	void AddEnergyDep_0(G4double edep_0) { fEdep_0 += edep_0; }
	void AddEnergyDep_1(G4double edep_1) { fEdep_1 += edep_1; }
	void AddEnergyDep_2(G4double edep_2) { fEdep_2 += edep_2; }
	void AddEnergyDep_3(G4double edep_3) { fEdep_3 += edep_3; }
	void AddEnergyDep_4(G4double edep_4) { fEdep_4 += edep_4; }
	void AddEnergyDep_5(G4double edep_5) { fEdep_5 += edep_5; }
	void AddEnergyDep_6(G4double edep_6) { fEdep_6 += edep_6; }
	void AddEnergyDep_7(G4double edep_7) { fEdep_7 += edep_7; }
	void AddEnergyDep_8(G4double edep_8) { fEdep_8 += edep_8; }
	void AddEnergyDep_9(G4double edep_9) { fEdep_9 += edep_9; }
	void AddEnergyDep_10(G4double edep_10) { fEdep_10 += edep_10; }

	void AddEnergyDep_11(G4double edep_11) { fEdep_11 += edep_11; }
	void AddEnergyDep_12(G4double edep_12) { fEdep_12 += edep_12; }
	void AddEnergyDep_13(G4double edep_13) { fEdep_13 += edep_13; }
	void AddEnergyDep_14(G4double edep_14) { fEdep_14 += edep_14; }
	void AddEnergyDep_15(G4double edep_15) { fEdep_15 += edep_15; }
	void AddEnergyDep_16(G4double edep_16) { fEdep_16 += edep_16; }
	void AddEnergyDep_17(G4double edep_17) { fEdep_17 += edep_17; }
	void AddEnergyDep_18(G4double edep_18) { fEdep_18 += edep_18; }
	void AddEnergyDep_19(G4double edep_19) { fEdep_19 += edep_19; }
	void AddEnergyDep_20(G4double edep_20) { fEdep_20 += edep_20; }
	void AddEnergyDep_21(G4double edep_21) { fEdep_21 += edep_21; }
	void AddEnergyDep_22(G4double edep_22) { fEdep_22 += edep_22; }
	void AddEnergyDep_23(G4double edep_23) { fEdep_23 += edep_23; }
	void AddEnergyDep_24(G4double edep_24) { fEdep_24 += edep_24; }
	void AddEnergyDep_25(G4double edep_25) { fEdep_25 += edep_25; }

private:
	G4double fEdep_0;
	G4int i_0;
	G4double TotalEdep_0;
	G4double TotalDose_0;
	G4double AvgEdep_0;
	G4double AvgDose_0;

	G4double fEdep_1;
	G4int i_1;
	G4double TotalEdep_1;
	G4double TotalDose_1;
	G4double AvgEdep_1;
	G4double AvgDose_1;

	G4double fEdep_2;
	G4int i_2;
	G4double TotalEdep_2;
	G4double TotalDose_2;
	G4double AvgEdep_2;
	G4double AvgDose_2;

	G4double fEdep_3;
	G4int i_3;
	G4double TotalEdep_3;
	G4double TotalDose_3;
	G4double AvgEdep_3;
	G4double AvgDose_3;

	G4double fEdep_4;
	G4int i_4;
	G4double TotalEdep_4;
	G4double TotalDose_4;
	G4double AvgEdep_4;
	G4double AvgDose_4;

	G4double fEdep_5;
	G4int i_5;
	G4double TotalEdep_5;
	G4double TotalDose_5;
	G4double AvgEdep_5;
	G4double AvgDose_5;

	G4double fEdep_6;
	G4int i_6;
	G4double TotalEdep_6;
	G4double TotalDose_6;
	G4double AvgEdep_6;
	G4double AvgDose_6;

	G4double fEdep_7;
	G4int i_7;
	G4double TotalEdep_7;
	G4double TotalDose_7;
	G4double AvgEdep_7;
	G4double AvgDose_7;

	G4double fEdep_8;
	G4int i_8;
	G4double TotalEdep_8;
	G4double TotalDose_8;
	G4double AvgEdep_8;
	G4double AvgDose_8;

	G4double fEdep_9;
	G4int i_9;
	G4double TotalEdep_9;
	G4double TotalDose_9;
	G4double AvgEdep_9;
	G4double AvgDose_9;

	G4double fEdep_10;
	G4int i_10;
	G4double TotalEdep_10;
	G4double TotalDose_10;
	G4double AvgEdep_10;
	G4double AvgDose_10;

	G4double fEdep_11;
	G4int i_11;
	G4double TotalEdep_11;
	G4double TotalDose_11;
	G4double AvgEdep_11;
	G4double AvgDose_11;

	G4double fEdep_12;
	G4int i_12;
	G4double TotalEdep_12;
	G4double TotalDose_12;
	G4double AvgEdep_12;
	G4double AvgDose_12;

	G4double fEdep_13;
	G4int i_13;
	G4double TotalEdep_13;
	G4double TotalDose_13;
	G4double AvgEdep_13;
	G4double AvgDose_13;

	G4double fEdep_14;
	G4int i_14;
	G4double TotalEdep_14;
	G4double TotalDose_14;
	G4double AvgEdep_14;
	G4double AvgDose_14;

	G4double fEdep_15;
	G4int i_15;
	G4double TotalEdep_15;
	G4double TotalDose_15;
	G4double AvgEdep_15;
	G4double AvgDose_15;

	G4double fEdep_16;
	G4int i_16;
	G4double TotalEdep_16;
	G4double TotalDose_16;
	G4double AvgEdep_16;
	G4double AvgDose_16;

	G4double fEdep_17;
	G4int i_17;
	G4double TotalEdep_17;
	G4double TotalDose_17;
	G4double AvgEdep_17;
	G4double AvgDose_17;

	G4double fEdep_18;
	G4int i_18;
	G4double TotalEdep_18;
	G4double TotalDose_18;
	G4double AvgEdep_18;
	G4double AvgDose_18;

	G4double fEdep_19;
	G4int i_19;
	G4double TotalEdep_19;
	G4double TotalDose_19;
	G4double AvgEdep_19;
	G4double AvgDose_19;

	G4double fEdep_20;
	G4int i_20;
	G4double TotalEdep_20;
	G4double TotalDose_20;
	G4double AvgEdep_20;
	G4double AvgDose_20;

	G4double fEdep_21;
	G4int i_21;
	G4double TotalEdep_21;
	G4double TotalDose_21;
	G4double AvgEdep_21;
	G4double AvgDose_21;

	G4double fEdep_22;
	G4int i_22;
	G4double TotalEdep_22;
	G4double TotalDose_22;
	G4double AvgEdep_22;
	G4double AvgDose_22;

	G4double fEdep_23;
	G4int i_23;
	G4double TotalEdep_23;
	G4double TotalDose_23;
	G4double AvgEdep_23;
	G4double AvgDose_23;

	G4double fEdep_24;
	G4int i_24;
	G4double TotalEdep_24;
	G4double TotalDose_24;
	G4double AvgEdep_24;
	G4double AvgDose_24;

	G4double fEdep_25;
	G4int i_25;
	G4double TotalEdep_25;
	G4double TotalDose_25;
	G4double AvgEdep_25;
	G4double AvgDose_25;
};

#endif