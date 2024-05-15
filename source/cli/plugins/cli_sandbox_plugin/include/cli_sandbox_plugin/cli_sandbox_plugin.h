/*
 *	CLI Sandbox Plugin by Parra Studios
 *	A plugin implementing sandboxing functionality for MetaCall CLI.
 *
 *	Copyright (C) 2016 - 2024 Vicente Eduardo Ferrer Garcia <vic798@gmail.com>
 *
 *	Licensed under the Apache License, Version 2.0 (the "License");
 *	you may not use this file except in compliance with the License.
 *	You may obtain a copy of the License at
 *
 *		http://www.apache.org/licenses/LICENSE-2.0
 *
 *	Unless required by applicable law or agreed to in writing, software
 *	distributed under the License is distributed on an "AS IS" BASIS,
 *	WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *	See the License for the specific language governing permissions and
 *	limitations under the License.
 *
 */

#ifndef CLI_SANDBOX_PLUGIN_H
#define CLI_SANDBOX_PLUGIN_H 1

#include <cli_sandbox_plugin/cli_sandbox_plugin_api.h>

#include <dynlink/dynlink.h>

#ifdef __cplusplus
extern "C" {
#endif

CLI_SANDBOX_PLUGIN_API int cli_sandbox_plugin(void *loader, void *handle);

DYNLINK_SYMBOL_EXPORT(cli_sandbox_plugin);

#ifdef __cplusplus
}
#endif

#endif /* CLI_SANDBOX_PLUGIN_H */
