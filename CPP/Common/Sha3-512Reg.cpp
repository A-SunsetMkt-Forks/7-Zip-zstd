// Sha3-512Reg.cpp /TR 2023-06-18

#include "StdAfx.h"

#include "../../C/CpuArch.h"

EXTERN_C_BEGIN
#include "../../C/hashes/sha3c.h"
EXTERN_C_END

#include "../Common/MyCom.h"
#include "../7zip/Common/RegisterCodec.h"

// SHA3-512
Z7_CLASS_IMP_COM_1(
  CSHA3_512Hasher
  , IHasher
)
  SHA3_CTX _ctx;
  Byte mtDummy[1 << 7];

public:
  CSHA3_512Hasher() { SHA3_Init(&_ctx, 512); }
};

Z7_COM7F_IMF2(void, CSHA3_512Hasher::Init())
{
  SHA3_Init(&_ctx, 512);
}

Z7_COM7F_IMF2(void, CSHA3_512Hasher::Update(const void *data, UInt32 size))
{
  SHA3_Update(&_ctx, (const Byte *)data, size);
}

Z7_COM7F_IMF2(void, CSHA3_512Hasher::Final(Byte *digest))
{
  SHA3_Final(digest, &_ctx);
}
REGISTER_HASHER(CSHA3_512Hasher, 0x233, "SHA3-512", SHA3_512_DIGEST_LENGTH)
