/*
 * Copyright 2017 Google, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <string>

#include "lib/ftl/command_line.h"
#include "lib/txt/tests/txt/utils.h"

namespace txt {

static std::string gFontDir;
static ftl::CommandLine gCommandLine;

const std::string GetFontDir() {
  return gFontDir;
}

void SetFontDir(const std::string& dir) {
  gFontDir = dir;
}

const ftl::CommandLine& GetCommandLineForProcess() {
  return gCommandLine;
}

void SetCommandLine(ftl::CommandLine cmd) {
  gCommandLine = std::move(cmd);
}

}  // namespace txt
