/*
 * Copyright (C) 2011-2018 Intel Corporation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in
 *     the documentation and/or other materials provided with the
 *     distribution.
 *   * Neither the name of Intel Corporation nor the names of its
 *     contributors may be used to endorse or promote products derived
 *     from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#ifndef _CSR_TEMPLATE_DATA_H_
#define _CSR_TEMPLATE_DATA_H_

#include "ae_ipp.h"
#include "signing_template_info.h"

//NRG: Note: This template came from the Backend POC and needs to be replaced
static Ipp8u CertificateSigningRequestTemplate[] =
{
    /* Certificate Request Info (to be signed): Offset: 0x04   Length: 249 bytes                               */
    /*                                 ====                                                                    */
    /*0000h:*/ 0x30, 0x82, 0x01, 0x51, 0x30, 0x81, 0xF9, 0x02, 0x01, 0x00, 0x30, 0x53, 0x31, 0x0B, 0x30, 0x09,
    /*0010h:*/ 0x06, 0x03, 0x55, 0x04, 0x06, 0x0C, 0x02, 0x55, 0x53, 0x31, 0x1A, 0x30, 0x18, 0x06, 0x03, 0x55,
    /*0020h:*/ 0x04, 0x0A, 0x0C, 0x11, 0x49, 0x6E, 0x74, 0x65, 0x6C, 0x20, 0x43, 0x6F, 0x72, 0x70, 0x6F, 0x72,
    /*0030h:*/ 0x61, 0x74, 0x69, 0x6F, 0x6E, 0x31, 0x0E, 0x30, 0x0C, 0x06, 0x03, 0x55, 0x04, 0x03, 0x0C, 0x05,
    /*0040h:*/ 0x49, 0x6E, 0x74, 0x65, 0x6C, 0x31, 0x18, 0x30, 0x16, 0x06, 0x0A, 0x09, 0x92, 0x26, 0x89, 0x93,
    /*0050h:*/ 0xF2, 0x2C, 0x64, 0x01, 0x01, 0x0C, 0x08, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x31, 0x30,
    /*0060h:*/ 0x59, 0x30, 0x13, 0x06, 0x07, 0x2A, 0x86, 0x48, 0xCE, 0x3D, 0x02, 0x01, 0x06, 0x08, 0x2A, 0x86,
    /* Public Key: Offset: 0x007A  Length: 1 + 64 bytes   (0x04 || public key Px || public key Py)             */                                                
    /*                                                               ====  ====                                */
    /*0070h:*/ 0x48, 0xCE, 0x3D, 0x03, 0x01, 0x07, 0x03, 0x42, 0x00, 0x04, 0x94, 0x35, 0xFB, 0xCE, 0xF8, 0x5E,
    /*0080h:*/ 0xA8, 0x9D, 0xF6, 0x61, 0x64, 0x38, 0x3F, 0x1F, 0xF2, 0x9D, 0x2F, 0x3E, 0xE6, 0xE2, 0xD4, 0xC7,
    /*0090h:*/ 0x70, 0x52, 0x93, 0x59, 0x3A, 0x39, 0xDD, 0xB8, 0x56, 0x1F, 0xB9, 0xFD, 0xBE, 0x99, 0x64, 0x0B,
    /*00a0h:*/ 0x6E, 0xF5, 0xA5, 0xFB, 0xB8, 0x8C, 0x47, 0xC2, 0xF0, 0xC1, 0x4E, 0x52, 0x8F, 0xB7, 0x75, 0x3A,
    /*00b0h:*/ 0x0E, 0xF3, 0x76, 0x62, 0x4E, 0x5D, 0x89, 0x2C, 0x7B, 0x84, 0xA0, 0x44, 0x30, 0x42, 0x06, 0x09,
    /*00c0h:*/ 0x2A, 0x86, 0x48, 0x86, 0xF7, 0x0D, 0x01, 0x09, 0x0E, 0x31, 0x35, 0x30, 0x33, 0x30, 0x0E, 0x06,
    /*00d0h:*/ 0x03, 0x55, 0x1D, 0x0F, 0x01, 0x01, 0xFF, 0x04, 0x04, 0x03, 0x02, 0x06, 0xC0, 0x30, 0x0C, 0x06,
    /*00e0h:*/ 0x03, 0x55, 0x1D, 0x13, 0x01, 0x01, 0xFF, 0x04, 0x02, 0x30, 0x00, 0x30, 0x13, 0x06, 0x09, 0x2A,
    /*00f0h:*/ 0x86, 0x48, 0x86, 0xF8, 0x4D, 0x01, 0x09, 0x02, 0x01, 0x01, 0xFF, 0x04, 0x03, 0x0A, 0x01, 0x00,
    /*0100h:*/ 0x30, 0x0A, 0x06, 0x08, 0x2A, 0x86, 0x48, 0xCE, 0x3D, 0x04, 0x03, 0x02, 0x03, 0x47, 0x00, 0x30,
    /* Signature X:              ====               Offset: 0x0113  Length: 32 bytes                           */
    /*0110h:*/ 0x44, 0x02, 0x20, 0x47, 0x02, 0x9C, 0x14, 0x01, 0x1B, 0x61, 0x3C, 0x93, 0x76, 0xAD, 0x74, 0x6E,
    /*0120h:*/ 0xB8, 0x4E, 0xAB, 0x55, 0x01, 0xF7, 0x82, 0x4F, 0xC5, 0xD2, 0x1C, 0x1D, 0x3B, 0xFD, 0xBC, 0x97,
    /* Signature Y:                          ====   Offset: 0x135  Length: 32 bytes                            */
    /*0130h:*/ 0x4A, 0x6E, 0x5A, 0x02, 0x20, 0x2A, 0x7E, 0xAA, 0xC7, 0x7B, 0xD4, 0x1C, 0x74, 0x77, 0xDC, 0xA8,
    /*0140h:*/ 0x22, 0x75, 0x35, 0x1D, 0x3A, 0x53, 0x32, 0x17, 0x4C, 0x7E, 0xEA, 0x15, 0xD3, 0xF4, 0x47, 0x49,
    /*0150h:*/ 0x20, 0x39, 0xF3, 0x38, 0x63
};


tSigningTemplateInfo CSRT_Info = 
{ 
    CertificateSigningRequestTemplate, sizeof(CertificateSigningRequestTemplate),
    0x0004, 249,
    0x007a,  64,
    0x0113,  32,
    0x0135,  32
};


#endif
