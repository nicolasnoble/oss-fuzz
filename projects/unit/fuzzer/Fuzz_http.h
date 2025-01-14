/* Copyright 2022 Google LLC
Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
      http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/
#include <nxt_main.h>
#include "nxt_h1proto.c"

nxt_int_t nxt_http_parse_fuzz(nxt_str_t *request, nxt_lvlhsh_t *hash);

nxt_int_t
nxt_http_test_header_return(void *ctx, nxt_http_field_t *field, uintptr_t data)
{
  return data;
}
