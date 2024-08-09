#pragma once

namespace ACE {

    class ACECodeFlow {
    public:
        ACECodeFlow();
        ~ACECodeFlow();

        void Initialize();
        void ExecuteScript(const char* script);
        void Shutdown();

    private:
        // Internal data and methods
    };

} // namespace ACE
