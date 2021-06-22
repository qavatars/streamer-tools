#include "custom-types/shared/macros.hpp"
#include "HMUI/ViewController.hpp"


// ViewController for the settings UI
DECLARE_CLASS_CODEGEN(StreamerTools, stSettingViewController, HMUI::ViewController,
    DECLARE_OVERRIDE_METHOD(void, DidActivate, il2cpp_utils::FindMethodUnsafe("HMUI", "ViewController", "DidActivate", 3), bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    //DECLARE_OVERRIDE_METHOD(void, DidDeactivate, il2cpp_utils::FindMethodUnsafe("HMUI", "ViewController", "DidDeactivate", 2), bool removedFromHierarchy, bool systemScreenDisabling);
#ifdef BS__1_16    
    REGISTER_FUNCTION(
#elif defined(BS__1_13_2)
    REGISTER_FUNCTION(stSettingViewController,
#endif
        REGISTER_METHOD(DidActivate);
        //REGISTER_METHOD(DidDeactivate);
    )
);