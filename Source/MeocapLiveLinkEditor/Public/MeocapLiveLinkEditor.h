#include "Modules/ModuleInterface.h"
/// @cond no_doc
class FMeocapLiveLinkEditorModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
