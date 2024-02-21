#!/usr/bin/env python3

#
#	MetaCall Install Script by Parra Studios
#	Cross-platform set of scripts to install MetaCall infrastructure.
#
#	Copyright (C) 2016 - 2024 Vicente Eduardo Ferrer Garcia <vic798@gmail.com>
#
#	Licensed under the Apache License, Version 2.0 (the "License");
#	you may not use this file except in compliance with the License.
#	You may obtain a copy of the License at
#
#		http://www.apache.org/licenses/LICENSE-2.0
#
#	Unless required by applicable law or agreed to in writing, software
#	distributed under the License is distributed on an "AS IS" BASIS,
#	WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#	See the License for the specific language governing permissions and
#	limitations under the License.
#

from http import client
import ssl
import sys

def fetch_https(url: str):
	try:
		print(ssl.get_default_verify_paths())
		sys.stdout.flush()
		conn = client.HTTPSConnection(url, 443)
		conn.request('GET', '/')
		response = conn.getresponse()
		data = response.read()
		conn.close()
		return [x for x in data[:15]]
	except Exception as e:
		print(e)
		sys.stdout.flush()
		return b'<!doctype invalid>'
