//
// highCastleHardwareCtrlTest.cpp
//
//  Generated on June 22 2020
//  Template created by Peter Gusev on 27 January 2020.
//  Copyright 2013-2019 Regents of the University of California
//

#include "highCastleHardwareCtrlTest.h"
#include "logging.hpp"
#include "git-describe.h"

#define STRINGIZE_VERSION(v) STRINGIZE_TOKEN(v)
#define STRINGIZE_TOKEN(t) #t
#define PLUGIN_VERSION STRINGIZE_VERSION(GIT_DESCRIBE)

#define MODULE_NAME "highCastleHardwareCtrlTest"
#define LOCTEXT_NAMESPACE "FhighCastleHardwareCtrlTestModule"

void FhighCastleHardwareCtrlTestModule::StartupModule()
{
    initModule(MODULE_NAME, PLUGIN_VERSION);

    // To log using ReLog plugin, use these macro definitions:
    // DLOG_PLUGIN_ERROR("Error message");
    // DLOG_PLUGIN_WARN("Warning message");
    // DLOG_PLUGIN_INFO("Info message");
    // DLOG_PLUGIN_DEBUG("Debug message");
    // DLOG_PLUGIN_TRACE("Trace message");

    // This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FhighCastleHardwareCtrlTestModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FhighCastleHardwareCtrlTestModule, highCastleHardwareCtrlTest)
