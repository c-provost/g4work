#ifndef CONSTRUCTION_HH
#define CONSTRUCTION_HH

#include "G4VUserDetectorConstruction.hh"
#include "G4VPhysicalVolume.hh"
#include "G4LogicalVolume.hh"
#include "G4Box.hh"
#include "G4Tubs.hh"
#include "G4Sphere.hh"
#include "G4PVPlacement.hh"
#include "G4NistManager.hh"
#include "G4SystemOfUnits.hh"
#include "G4GenericMessenger.hh"
#include "G4GeometryManager.hh"
#include "G4PhysicalVolumeStore.hh"
#include "G4LogicalVolumeStore.hh"
#include "G4SolidStore.hh"
#include "G4RunManager.hh"
#include "G4LogicalVolume.hh"
#include "G4VPhysicalVolume.hh"
#include "G4PVReplica.hh"

class MyDetectorConstruction : public G4VUserDetectorConstruction
{
public:
	MyDetectorConstruction();
	~MyDetectorConstruction();

	G4LogicalVolume* GetScoringVolume_0() const { return fScoringVolume_0; }
	G4LogicalVolume* GetScoringVolume_1() const { return fScoringVolume_1; }
	G4LogicalVolume* GetScoringVolume_2() const { return fScoringVolume_2; }
	G4LogicalVolume* GetScoringVolume_3() const { return fScoringVolume_3; }
	G4LogicalVolume* GetScoringVolume_4() const { return fScoringVolume_4; }
	G4LogicalVolume* GetScoringVolume_5() const { return fScoringVolume_5; }
	G4LogicalVolume* GetScoringVolume_6() const { return fScoringVolume_6; }
	G4LogicalVolume* GetScoringVolume_7() const { return fScoringVolume_7; }
	G4LogicalVolume* GetScoringVolume_8() const { return fScoringVolume_8; }
	G4LogicalVolume* GetScoringVolume_9() const { return fScoringVolume_9; }
	G4LogicalVolume* GetScoringVolume_10() const { return fScoringVolume_10; }
	G4LogicalVolume* GetScoringVolume_11() const { return fScoringVolume_11; }
	G4LogicalVolume* GetScoringVolume_12() const { return fScoringVolume_12; }
	G4LogicalVolume* GetScoringVolume_13() const { return fScoringVolume_13; }
	G4LogicalVolume* GetScoringVolume_14() const { return fScoringVolume_14; }
	G4LogicalVolume* GetScoringVolume_15() const { return fScoringVolume_15; }
	G4LogicalVolume* GetScoringVolume_16() const { return fScoringVolume_16; }
	G4LogicalVolume* GetScoringVolume_17() const { return fScoringVolume_17; }
	G4LogicalVolume* GetScoringVolume_18() const { return fScoringVolume_18; }
	G4LogicalVolume* GetScoringVolume_19() const { return fScoringVolume_19; }
	G4LogicalVolume* GetScoringVolume_20() const { return fScoringVolume_20; }
	G4LogicalVolume* GetScoringVolume_21() const { return fScoringVolume_21; }
	G4LogicalVolume* GetScoringVolume_22() const { return fScoringVolume_22; }
	G4LogicalVolume* GetScoringVolume_23() const { return fScoringVolume_23; }
	G4LogicalVolume* GetScoringVolume_24() const { return fScoringVolume_24; }
	G4LogicalVolume* GetScoringVolume_25() const { return fScoringVolume_25; }

	virtual G4VPhysicalVolume* Construct();

private:
	G4Box* solidWorld;
	G4Sphere* solidAu, * solidAl_0, * solidAl_1, * solidAl_2, * solidAl_3, * solidAl_4, * solidAl_5, * solidAl_6, * solidAl_7, * solidAl_8, * solidAl_9, * solidAl_10;
	G4LogicalVolume* logicWorld, * logicAu, * logicAl_0, * logicAl_1, * logicAl_2, * logicAl_3, * logicAl_4, * logicAl_5, * logicAl_6, * logicAl_7, * logicAl_8, * logicAl_9, *logicAl_10;
	G4VPhysicalVolume* physWorld, * physAu, * physAl_0, * physAl_1, * physAl_2, * physAl_3, * physAl_4, * physAl_5, * physAl_6, * physAl_7, * physAl_8, * physAl_9, *physAl_10;

	G4Sphere* solidAl_a; // naming conventions for aluminum and materials in general...
	G4LogicalVolume* logicAl_a;
	G4VPhysicalVolume* physAl_a;

	G4Sphere* solidAl_11, * solidAl_12, * solidAl_13, * solidAl_14, * solidAl_15, * solidAl_16, * solidAl_17, * solidAl_18, * solidAl_19, * solidAl_20, * solidAl_21, * solidAl_22, * solidAl_23, * solidAl_24, * solidAl_25;
	G4LogicalVolume* logicAl_11, * logicAl_12, * logicAl_13, * logicAl_14, * logicAl_15, * logicAl_16, * logicAl_17, * logicAl_18, * logicAl_19, * logicAl_20, * logicAl_21, * logicAl_22, * logicAl_23, * logicAl_24, * logicAl_25;
	G4VPhysicalVolume* physAl_11, * physAl_12, * physAl_13, * physAl_14, * physAl_15, * physAl_16, * physAl_17, * physAl_18, * physAl_19, * physAl_20, * physAl_21, * physAl_22, * physAl_23, * physAl_24, * physAl_25;
	
	G4Material* Al, * worldMat, * Au;

	void DefineMaterials();

	G4LogicalVolume *fScoringVolume_0;
	G4LogicalVolume *fScoringVolume_1;
	G4LogicalVolume* fScoringVolume_2;
	G4LogicalVolume* fScoringVolume_3;
	G4LogicalVolume* fScoringVolume_4;
	G4LogicalVolume* fScoringVolume_5;
	G4LogicalVolume* fScoringVolume_6;
	G4LogicalVolume* fScoringVolume_7;
	G4LogicalVolume* fScoringVolume_8;
	G4LogicalVolume* fScoringVolume_9;
	G4LogicalVolume* fScoringVolume_10;
	G4LogicalVolume* fScoringVolume_11;
	G4LogicalVolume* fScoringVolume_12;
	G4LogicalVolume* fScoringVolume_13;
	G4LogicalVolume* fScoringVolume_14;
	G4LogicalVolume* fScoringVolume_15;
	G4LogicalVolume* fScoringVolume_16;
	G4LogicalVolume* fScoringVolume_17;
	G4LogicalVolume* fScoringVolume_18;
	G4LogicalVolume* fScoringVolume_19;
	G4LogicalVolume* fScoringVolume_20;
	G4LogicalVolume* fScoringVolume_21;
	G4LogicalVolume* fScoringVolume_22;
	G4LogicalVolume* fScoringVolume_23;
	G4LogicalVolume* fScoringVolume_24;
	G4LogicalVolume* fScoringVolume_25;

	G4double xWorld, yWorld, zWorld;
};

#endif