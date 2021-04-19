
#pragma once

#include "Modules/ModuleManager.h"


class FRuntimeFBXImportModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};