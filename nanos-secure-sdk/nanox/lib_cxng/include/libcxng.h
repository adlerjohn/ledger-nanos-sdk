
/*******************************************************************************
*   Ledger Nano S - Secure firmware
*   (c) 2022 Ledger
*
*  Licensed under the Apache License, Version 2.0 (the "License");
*  you may not use this file except in compliance with the License.
*  You may obtain a copy of the License at
*
*      http://www.apache.org/licenses/LICENSE-2.0
*
*  Unless required by applicable law or agreed to in writing, software
*  distributed under the License is distributed on an "AS IS" BASIS,
*  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*  See the License for the specific language governing permissions and
*  limitations under the License.
********************************************************************************/

/**
 * @file    libcxng.h
 * @brief   Include cryptography files.
 */

#ifndef LIBLCXNG_H
#define LIBLCXNG_H

/* ####################################################################### */
/*                                    OS                                   */
/* ####################################################################### */

#include "ox.h"

/* ####################################################################### */
/*                                  COMMON                                 */
/* ####################################################################### */

#include "lcx_common.h"

/* ####################################################################### */
/*                                 HASH/HMAC                               */
/* ####################################################################### */

/* ======================================================================= */
/*                                  HASH                                   */
/* ======================================================================= */
#include "lcx_hash.h"

#include "lcx_ripemd160.h"
#include "lcx_sha256.h"
#include "lcx_sha512.h"
#include "lcx_sha3.h"
#include "lcx_blake2.h"
#include "lcx_groestl.h"

/* ======================================================================= */
/*                                 HASH MAC                                */
/* ======================================================================= */

#include "lcx_hmac.h"

/* ======================================================================= */
/*                                  PKDF2                                  */
/* ======================================================================= */

#include "lcx_pbkdf2.h"

/* ####################################################################### */
/*                                   RAND                                  */
/* ####################################################################### */

#include "lcx_rng.h"

/* ####################################################################### */
/*                                   MATH                                  */
/* ####################################################################### */

#include "lcx_math.h"

/* ####################################################################### */
/*                              CIPHER/SIGNATURE                           */
/* ####################################################################### */

/* ======================================================================= */
/*                                   DES                                   */
/* ======================================================================= */

#include "lcx_des.h"

/* ======================================================================= */
/*                                   AES                                   */
/* ======================================================================= */

#include "lcx_aes.h"

/* ======================================================================= */
/*                                   RSA                                   */
/* ======================================================================= */

#include "lcx_rsa.h"

/* ======================================================================= */
/*                                   ECC                                   */
/* ======================================================================= */

#include "lcx_ecfp.h"

#include "lcx_ecdsa.h"
#include "lcx_eddsa.h"
#include "lcx_ecschnorr.h"

/* ####################################################################### */
/*                              KEY AGREEMENT                              */
/* ####################################################################### */

/* ======================================================================= */
/*                                 ECC-KA                                  */
/* ======================================================================= */

#include "lcx_ecdh.h"

/* ####################################################################### */
/*                                 CHECKSUM                                */
/* ####################################################################### */

/* ======================================================================= */
/*                                   CRC                                   */
/* ======================================================================= */

#include "lcx_crc.h"

/* ####################################################################### */
/*                                 CHECKSUM                                */
/* ####################################################################### */

#endif
