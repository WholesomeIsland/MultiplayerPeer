#include "register_types.h"

#include "core/config/engine.h"
#include "core/object/class_db.h"

#include "godotsteam_multiplayer_peer.h"


void initialize_godotsteam_multiplayer_peer(ModuleInitializationLevel level) {
	if (level == MODULE_INITIALIZATION_LEVEL_SCENE) {
		ClassDB::register_class<SteamMultiplayerPeer>();
	}
}


void uninitialize_godotsteam_multiplayer_peer(ModuleInitializationLevel level) {
}