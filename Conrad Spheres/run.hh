#ifndef RUN_HH
#define RUN_HH

#include "G4UserRunAction.hh"
#include "G4Run.hh"

#include "G4AnalysisManager.hh"

#include "G4Accumulable.hh"
#include "globals.hh"

class MyRunAction : public G4UserRunAction
{
public:
	MyRunAction();
	~MyRunAction();

	virtual void BeginOfRunAction(const G4Run*) override;
	virtual void EndOfRunAction(const G4Run*) override;

	void AddEnergyDep(G4double edep);

private:
	G4Accumulable<G4double> fEdep = 0.;
};

#endif