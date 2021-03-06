#pragma once

#include "npIncludes.h"
#include "npMesh.h"
#include "npBone.h"
class npBoneMesh:public npMesh
{
public:
	npBoneMesh(void);
	~npBoneMesh(void);

	void prepBones();
	void setMatrixes();
	void update(float timeStep,float animeSlerp,int ani1,int ani2);


	vector < npBone *> bones;
	npBone * rootBone;
	string name;
	
	float* normalMatrices;
	float* boneMatrices;
	float time;
};

