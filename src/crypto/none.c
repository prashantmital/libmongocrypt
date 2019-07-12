/*
 * Copyright 2019-present MongoDB, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* everything is a no-op */
/*
 * Copyright 2019-present MongoDB, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "../mongocrypt-crypto-private.h"
#include "../mongocrypt-private.h"

#include <CommonCrypto/CommonCryptor.h>
#include <CommonCrypto/CommonHMAC.h>
#include <CommonCrypto/CommonRandom.h>

bool _native_crypto_initialized = false;

void
_native_crypto_init ()
{
   _native_crypto_initialized = true;
}


bool
_native_crypto_aes_256_cbc_encrypt (const _mongocrypt_buffer_t *key,
                                    const _mongocrypt_buffer_t *iv,
                                    const _mongocrypt_buffer_t *in,
                                    _mongocrypt_buffer_t *out,
                                    uint32_t *bytes_written,
                                    mongocrypt_status_t *status)
{
   CLIENT_ERR ("hook not set for aes_256_cbc_encrypt");
   return false;
}


bool
_native_crypto_aes_256_cbc_decrypt (const _mongocrypt_buffer_t *key,
                                    const _mongocrypt_buffer_t *iv,
                                    const _mongocrypt_buffer_t *in,
                                    _mongocrypt_buffer_t *out,
                                    uint32_t *bytes_written,
                                    mongocrypt_status_t *status)
{
   CLIENT_ERR ("hook not set for aes_256_cbc_decrypt");
   return false;
}


bool
_native_crypto_hmac_sha_512 (const _mongocrypt_buffer_t *key,
                             const _mongocrypt_buffer_t *in,
                             _mongocrypt_buffer_t *out,
                             mongocrypt_status_t *status)
{
   CLIENT_ERR ("hook not set for hmac_sha_512");
   return false;
}


bool
_native_crypto_random (_mongocrypt_buffer_t *out,
                       uint32_t count,
                       mongocrypt_status_t *status)
{
   CLIENT_ERR ("hook not set for random");
   return false;
}