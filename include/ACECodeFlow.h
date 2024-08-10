#pragma once

#include "ScriptManager.h"
#include "ScriptEngine.h"

// ACECodeFlow module entry point
class ACECodeFlow {
public:
    ACECodeFlow();
    ~ACECodeFlow();

    // Initialize the scripting system
    void Initialize();

    // Shutdown the scripting system
    void Shutdown();

private:
    ScriptManager* m_ScriptManager;
    ScriptEngine* m_ScriptEngine;
};
