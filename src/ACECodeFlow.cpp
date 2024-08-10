#include "ACECodeFlow.h"

ACECodeFlow::ACECodeFlow()
    : m_ScriptManager(new ScriptManager()), m_ScriptEngine(new ScriptEngine()) {}

ACECodeFlow::~ACECodeFlow() {
    delete m_ScriptEngine;
    delete m_ScriptManager;
}

void ACECodeFlow::Initialize() {
    // Initialize script manager and engine
    m_ScriptManager->Initialize();
    m_ScriptEngine->Initialize();
}

void ACECodeFlow::Shutdown() {
    // Shutdown script manager and engine
    m_ScriptEngine->Shutdown();
    m_ScriptManager->Shutdown();
}
