/*
* If not stated otherwise in this file or this component's LICENSE file the
* following copyright and licenses apply:
*
* Copyright 2022 Sky UK
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#ifndef ControlSettingsSTB_H
#define ControlSettingsSTB_H

#include "string.h"

#include "tvTypes.h"
#include "tvLog.h"
#include "tvSettings.h"
#include <pthread.h>
#include "Module.h"
#include "tvTypes.h"
#include "tvError.h"

#include "AbstractPlugin.h"
#include "utils.h"
#include "ControlSettingsCommon.h"

namespace WPEFramework {
namespace Plugin {

class ControlSettingsSTB : public AbstractPlugin {
    private:
        ControlSettingsSTB(const ControlSettingsSTB&) = delete;
        ControlSettingsSTB& operator=(const ControlSettingsSTB&) = delete;

	DECLARE_JSON_RPC_METHOD(getVolume)
        DECLARE_JSON_RPC_METHOD(setVolume)

    public:
	ControlSettingsSTB();
	~ControlSettingsSTB();
        ControlSettingsSTB *instance;
        std::string getErrorString (tvError_t eReturn);

    public:
        void Initialize();
        void Deinitialize();
};

}//namespace Plugin
}//namespace WPEFramework
#endif
