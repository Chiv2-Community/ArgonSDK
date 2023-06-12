#include "AutomationSettings.h"

UAutomationSettings::UAutomationSettings() {
    this->MaxAiPlayerTestDuration = 10.00f;
    this->MaxAiPlayerTestCharacterCount = 64;
    this->EnvironmentTestCsvColumn.AddDefaulted(25);
    this->EnvironmentPauseTime = 5.00f;
    this->SplunkURL = TEXT("http://splunk.tripwireinteractive.com:32123/services/collector/raw");
    this->SplunkToken = TEXT("78321b42-9456-4fba-a151-dc8e619e461e");
    this->bUseSplunk = true;
}

