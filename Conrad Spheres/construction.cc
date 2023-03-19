#include "construction.hh"

MyDetectorConstruction::MyDetectorConstruction()
{
	DefineMaterials();

	xWorld = 0.5 * m;
	yWorld = 0.5 * m;
	zWorld = 0.5 * m;
}

MyDetectorConstruction::~MyDetectorConstruction()
{}

void MyDetectorConstruction::DefineMaterials()
{
	G4NistManager* nist = G4NistManager::Instance();

	worldMat = nist->FindOrBuildMaterial("G4_AIR");

	Al = nist->FindOrBuildMaterial("G4_Al");
	Au = nist->FindOrBuildMaterial("G4_Au");
}

G4VPhysicalVolume* MyDetectorConstruction::Construct()
{
	solidWorld = new G4Box("solidWorld", xWorld, yWorld, zWorld);

	logicWorld = new G4LogicalVolume(solidWorld, worldMat, "logicWorld");

	physWorld = new G4PVPlacement(0, G4ThreeVector(0., 0., 0.), logicWorld, "physWorld", 0, false, 0, true);


	// other material before scoring volumes
	//solidAu = new G4Sphere("solidAu", 0.249 * m, 0.25 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	//
	// when other material is before scoring volumes that are 40 um apart
	//solidAu = new G4Sphere("solidAu", 0.251 * m, 0.254 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	//
	// when other material is after scoring volumes that are 10 um apart
	solidAu = new G4Sphere("solidAu", 0.25025 * m, 0.25325 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	// 

	logicAu = new G4LogicalVolume(solidAu, Au, "logicalAu");

	physAu = new G4PVPlacement(0, G4ThreeVector(0., 0., 0.), logicAu, "physAu", logicWorld, false, 0, true);
	

	// slices 40 um apart
	/*
	solidAl_0 = new G4Sphere("solidAl", 0.25 * m, 0.25004 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	solidAl_1 = new G4Sphere("solidAl", 0.25004 * m, 0.25008 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	solidAl_2 = new G4Sphere("solidAl", 0.25008 * m, 0.25012 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	solidAl_3 = new G4Sphere("solidAl", 0.25012 * m, 0.25016 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	solidAl_4 = new G4Sphere("solidAl", 0.25016 * m, 0.2502 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	solidAl_5 = new G4Sphere("solidAl", 0.2502 * m, 0.25024 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	solidAl_6 = new G4Sphere("solidAl", 0.25024 * m, 0.25028 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	solidAl_7 = new G4Sphere("solidAl", 0.25028 * m, 0.25032 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	solidAl_8 = new G4Sphere("solidAl", 0.25032 * m, 0.25036 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	solidAl_9 = new G4Sphere("solidAl", 0.25036 * m, 0.2504 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	solidAl_10 = new G4Sphere("solidAl", 0.2504 * m, 0.25044 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	solidAl_11 = new G4Sphere("solidAl", 0.25044 * m, 0.25048 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	solidAl_12 = new G4Sphere("solidAl", 0.25048 * m, 0.25052 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	solidAl_13 = new G4Sphere("solidAl", 0.25052 * m, 0.25056 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	solidAl_14 = new G4Sphere("solidAl", 0.25056 * m, 0.2506 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	solidAl_15 = new G4Sphere("solidAl", 0.2506 * m, 0.25064 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	solidAl_16 = new G4Sphere("solidAl", 0.25064 * m, 0.25068 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	solidAl_17 = new G4Sphere("solidAl", 0.25068 * m, 0.25072 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	solidAl_18 = new G4Sphere("solidAl", 0.25072 * m, 0.25076 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	solidAl_19 = new G4Sphere("solidAl", 0.25076 * m, 0.2508 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	solidAl_20 = new G4Sphere("solidAl", 0.2508 * m, 0.25084 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	solidAl_21 = new G4Sphere("solidAl", 0.25084 * m, 0.25088 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	solidAl_22 = new G4Sphere("solidAl", 0.25088 * m, 0.25092 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	solidAl_23 = new G4Sphere("solidAl", 0.25092 * m, 0.25096 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	solidAl_24 = new G4Sphere("solidAl", 0.25096 * m, 0.251 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	*/

	// slices 10 um apart
	solidAl_0 = new G4Sphere("solidAl", 0.25 * m, 0.25001 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	solidAl_1 = new G4Sphere("solidAl", 0.25001 * m, 0.25002 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	solidAl_2 = new G4Sphere("solidAl", 0.25002 * m, 0.25003 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	solidAl_3 = new G4Sphere("solidAl", 0.25003 * m, 0.25004 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	solidAl_4 = new G4Sphere("solidAl", 0.25004 * m, 0.25005 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	solidAl_5 = new G4Sphere("solidAl", 0.25005 * m, 0.25006 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	solidAl_6 = new G4Sphere("solidAl", 0.25006 * m, 0.25007 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	solidAl_7 = new G4Sphere("solidAl", 0.25007 * m, 0.25008 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	solidAl_8 = new G4Sphere("solidAl", 0.25008 * m, 0.25009 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	solidAl_9 = new G4Sphere("solidAl", 0.25009 * m, 0.2501 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	solidAl_10 = new G4Sphere("solidAl", 0.2501 * m, 0.25011 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	solidAl_11 = new G4Sphere("solidAl", 0.25011 * m, 0.25012 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	solidAl_12 = new G4Sphere("solidAl", 0.25012 * m, 0.25013 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	solidAl_13 = new G4Sphere("solidAl", 0.25013 * m, 0.25014 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	solidAl_14 = new G4Sphere("solidAl", 0.25014 * m, 0.25015 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	solidAl_15 = new G4Sphere("solidAl", 0.25015 * m, 0.25016 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	solidAl_16 = new G4Sphere("solidAl", 0.25016 * m, 0.25017 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	solidAl_17 = new G4Sphere("solidAl", 0.25017 * m, 0.25018 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	solidAl_18 = new G4Sphere("solidAl", 0.25018 * m, 0.25019 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	solidAl_19 = new G4Sphere("solidAl", 0.25019 * m, 0.2502 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	solidAl_20 = new G4Sphere("solidAl", 0.2502 * m, 0.25021 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	solidAl_21 = new G4Sphere("solidAl", 0.25021 * m, 0.25022 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	solidAl_22 = new G4Sphere("solidAl", 0.25022 * m, 0.25023 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	solidAl_23 = new G4Sphere("solidAl", 0.25023 * m, 0.25024 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	solidAl_24 = new G4Sphere("solidAl", 0.25024 * m, 0.25025 * m, 0., 3.141592653 * 2, 0., 3.141592653);


	// slice that calculates bulk dose
	// 
	// when other material is before scoring volumes that are 40 um apart
	// solidAl_25 = new G4Sphere("solidAl", 0.251 * m, 0.25104 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	// 
	// when other material is before scoring volumes that are 10 um apart
	//solidAl_25 = new G4Sphere("solidAl", 0.25025 * m, 0.25026 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	//
	// when other material is after scoring volumes that are 40 um apart 
	// solidAl_25 = new G4Sphere("solidAl", 0.24996 * m, 0.25 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	// 
	// when other material is after scoring volumes that are 10 um apart
	solidAl_25 = new G4Sphere("solidAl", 0.24999 * m, 0.25 * m, 0., 3.141592653 * 2, 0., 3.141592653);


	// additional material for accurate back scattering
	// 
	// when other material is before scoring volumes that are 40 um apart
	// solidAl_a = new G4Sphere("solidAl", 0.25104 * m, 0.254 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	// 
	// when other material is before scoring volumes that are 10 um apart
	//solidAl_a = new G4Sphere("solidAl", 0.25026 * m, 0.253 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	//
	// when other material is before scoring volumes that are 40 um apart
	// solidAl_a = new G4Sphere("solidAl", 0.247 * m, 0.24996 * m, 0., 3.141592653 * 2, 0., 3.141592653);
	// 
	// when other material is after scoring volumes that are 10 um apart
	solidAl_a = new G4Sphere("solidAl", 0.247 * m, 0.24999 * m, 0., 3.141592653 * 2, 0., 3.141592653);


	logicAl_0 = new G4LogicalVolume(solidAl_0, Al, "logicalAl");
	logicAl_1 = new G4LogicalVolume(solidAl_1, Al, "logicalAl");
	logicAl_2 = new G4LogicalVolume(solidAl_2, Al, "logicalAl");
	logicAl_3 = new G4LogicalVolume(solidAl_3, Al, "logicalAl");
	logicAl_4 = new G4LogicalVolume(solidAl_4, Al, "logicalAl");
	logicAl_5 = new G4LogicalVolume(solidAl_5, Al, "logicalAl");
	logicAl_6 = new G4LogicalVolume(solidAl_6, Al, "logicalAl");
	logicAl_7 = new G4LogicalVolume(solidAl_7, Al, "logicalAl");
	logicAl_8 = new G4LogicalVolume(solidAl_8, Al, "logicalAl");
	logicAl_9 = new G4LogicalVolume(solidAl_9, Al, "logicalAl");
	logicAl_10 = new G4LogicalVolume(solidAl_10, Al, "logicalAl");

	logicAl_11 = new G4LogicalVolume(solidAl_11, Al, "logicalAl");
	logicAl_12 = new G4LogicalVolume(solidAl_12, Al, "logicalAl");
	logicAl_13 = new G4LogicalVolume(solidAl_13, Al, "logicalAl");
	logicAl_14 = new G4LogicalVolume(solidAl_14, Al, "logicalAl");
	logicAl_15 = new G4LogicalVolume(solidAl_15, Al, "logicalAl");
	logicAl_16 = new G4LogicalVolume(solidAl_16, Al, "logicalAl");
	logicAl_17 = new G4LogicalVolume(solidAl_17, Al, "logicalAl");
	logicAl_18 = new G4LogicalVolume(solidAl_18, Al, "logicalAl");
	logicAl_19 = new G4LogicalVolume(solidAl_19, Al, "logicalAl");
	logicAl_20 = new G4LogicalVolume(solidAl_20, Al, "logicalAl");
	logicAl_21 = new G4LogicalVolume(solidAl_21, Al, "logicalAl");
	logicAl_22 = new G4LogicalVolume(solidAl_22, Al, "logicalAl");
	logicAl_23 = new G4LogicalVolume(solidAl_23, Al, "logicalAl");
	logicAl_24 = new G4LogicalVolume(solidAl_24, Al, "logicalAl");
	logicAl_25 = new G4LogicalVolume(solidAl_25, Al, "logicalAl");

	logicAl_a = new G4LogicalVolume(solidAl_a, Al, "logicalAl");
	// what is a????

	fScoringVolume_0 = logicAl_0;
	fScoringVolume_1 = logicAl_1;
	fScoringVolume_2 = logicAl_2;
	fScoringVolume_3 = logicAl_3;
	fScoringVolume_4 = logicAl_4;
	fScoringVolume_5 = logicAl_5;
	fScoringVolume_6 = logicAl_6;
	fScoringVolume_7 = logicAl_7;
	fScoringVolume_8 = logicAl_8;
	fScoringVolume_9 = logicAl_9;
	fScoringVolume_10 = logicAl_10;
	fScoringVolume_11 = logicAl_11;
	fScoringVolume_12 = logicAl_12;
	fScoringVolume_13 = logicAl_13;
	fScoringVolume_14 = logicAl_14;
	fScoringVolume_15 = logicAl_15;
	fScoringVolume_16 = logicAl_16;
	fScoringVolume_17 = logicAl_17;
	fScoringVolume_18 = logicAl_18;
	fScoringVolume_19 = logicAl_19;
	fScoringVolume_20 = logicAl_20;
	fScoringVolume_21 = logicAl_21;
	fScoringVolume_22 = logicAl_22;
	fScoringVolume_23 = logicAl_23;
	fScoringVolume_24 = logicAl_24;
	fScoringVolume_25 = logicAl_25;

	physAl_0 = new G4PVPlacement(0, G4ThreeVector(0., 0., 0.), logicAl_0, "physAl", logicWorld, false, 0, true);
	physAl_1 = new G4PVPlacement(0, G4ThreeVector(0., 0., 0.), logicAl_1, "physAl", logicWorld, false, 1, true);
	physAl_2 = new G4PVPlacement(0, G4ThreeVector(0., 0., 0.), logicAl_2, "physAl", logicWorld, false, 2, true);
	physAl_3 = new G4PVPlacement(0, G4ThreeVector(0., 0., 0.), logicAl_3, "physAl", logicWorld, false, 3, true);
	physAl_4 = new G4PVPlacement(0, G4ThreeVector(0., 0., 0.), logicAl_4, "physAl", logicWorld, false, 4, true);
	physAl_5 = new G4PVPlacement(0, G4ThreeVector(0., 0., 0.), logicAl_5, "physAl", logicWorld, false, 5, true);
	physAl_6 = new G4PVPlacement(0, G4ThreeVector(0., 0., 0.), logicAl_6, "physAl", logicWorld, false, 6, true);
	physAl_7 = new G4PVPlacement(0, G4ThreeVector(0., 0., 0.), logicAl_7, "physAl", logicWorld, false, 7, true);
	physAl_8 = new G4PVPlacement(0, G4ThreeVector(0., 0., 0.), logicAl_8, "physAl", logicWorld, false, 8, true);
	physAl_9 = new G4PVPlacement(0, G4ThreeVector(0., 0., 0.), logicAl_9, "physAl", logicWorld, false, 9, true);
	physAl_10= new G4PVPlacement(0, G4ThreeVector(0., 0., 0.), logicAl_10, "physAl", logicWorld, false, 10, true);

	physAl_11 = new G4PVPlacement(0, G4ThreeVector(0., 0., 0.), logicAl_11, "physAl", logicWorld, false, 22, true);
	physAl_12 = new G4PVPlacement(0, G4ThreeVector(0., 0., 0.), logicAl_12, "physAl", logicWorld, false, 23, true);
	physAl_13 = new G4PVPlacement(0, G4ThreeVector(0., 0., 0.), logicAl_13, "physAl", logicWorld, false, 24, true);
	physAl_14 = new G4PVPlacement(0, G4ThreeVector(0., 0., 0.), logicAl_14, "physAl", logicWorld, false, 25, true);
	physAl_15 = new G4PVPlacement(0, G4ThreeVector(0., 0., 0.), logicAl_15, "physAl", logicWorld, false, 26, true);
	physAl_16 = new G4PVPlacement(0, G4ThreeVector(0., 0., 0.), logicAl_16, "physAl", logicWorld, false, 27, true);
	physAl_17 = new G4PVPlacement(0, G4ThreeVector(0., 0., 0.), logicAl_17, "physAl", logicWorld, false, 28, true);
	physAl_18 = new G4PVPlacement(0, G4ThreeVector(0., 0., 0.), logicAl_18, "physAl", logicWorld, false, 29, true);
	physAl_19 = new G4PVPlacement(0, G4ThreeVector(0., 0., 0.), logicAl_19, "physAl", logicWorld, false, 30, true);
	physAl_20 = new G4PVPlacement(0, G4ThreeVector(0., 0., 0.), logicAl_20, "physAl", logicWorld, false, 31, true);
	physAl_21 = new G4PVPlacement(0, G4ThreeVector(0., 0., 0.), logicAl_21, "physAl", logicWorld, false, 32, true);
	physAl_22 = new G4PVPlacement(0, G4ThreeVector(0., 0., 0.), logicAl_22, "physAl", logicWorld, false, 33, true);
	physAl_23 = new G4PVPlacement(0, G4ThreeVector(0., 0., 0.), logicAl_23, "physAl", logicWorld, false, 34, true);
	physAl_24 = new G4PVPlacement(0, G4ThreeVector(0., 0., 0.), logicAl_24, "physAl", logicWorld, false, 35, true);
	physAl_25 = new G4PVPlacement(0, G4ThreeVector(0., 0., 0.), logicAl_25, "physAl", logicWorld, false, 36, true);

	physAl_a = new G4PVPlacement(0, G4ThreeVector(0., 0., 0.), logicAl_a, "physAl", logicWorld, false, 11, true);
	// why do a and 25 overlap? what is their purpose? why are they here?
	// check these copy numbers out... why do they have the number that they have?


	return physWorld;
}