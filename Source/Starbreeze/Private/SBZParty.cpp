#include "SBZParty.h"

void USBZParty::UpdatePartyState(const FSBZPartyData& InPartyState) {
}

void USBZParty::JoinPartyComplete(const ESBZOnlineCode& Result) {
}

void USBZParty::HostPartySession(const FSBZOnlineSessionParams& Params) {
}

void USBZParty::HostPartyComplete(const ESBZOnlineCode& Result) {
}

void USBZParty::HandleLostConnectionToPartyHost() {
}

void USBZParty::HandleGameStateLeft(FName StateName) {
}

void USBZParty::HandleGameStateEnter(FName StateName) {
}

FSBZPartyData USBZParty::GetPartyData() const {
    return FSBZPartyData{};
}

void USBZParty::CancelPartyRestore() {
}

USBZParty::USBZParty() {
    this->PartyClient = NULL;
    this->PartyHost = NULL;
    this->PartyOnlineBeacon = NULL;
    this->DefaultPort = 0;
    this->PartyRestoreTimeout = 1;
}

