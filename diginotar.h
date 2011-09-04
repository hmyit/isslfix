#define NUM_DIGINOTAR_PKHS        6
#define PKH_SIZE                  20
/**
 * Chrome hashes the whole subject public key info (SPKI)
 * here we only hash the public key (SecCertificateCopyPublicKeySHA1Digest)
 * => hashes are != than Chrome kHashes
 * could lead to false positives but quite unlikely (right?)
**/
unsigned char diginotar_pkhs[NUM_DIGINOTAR_PKHS][PKH_SIZE] = {
    //CN=DigiNotar Root CA
    {0x88, 0x68, 0xbf, 0xe0, 0x8e, 0x35, 0xc4, 0x3b, 0x38, 0x6b,
     0x62, 0xf7, 0x28, 0x3b, 0x84, 0x81, 0xc8, 0x0c, 0xd7, 0x4d},
    
    //CN=DigiNotar Cyber CA
    {0xab, 0xf9, 0x68, 0xdf, 0xcf, 0x4a, 0x37, 0xd7, 0x7b, 0x45,
     0x8c, 0x5f, 0x72, 0xde, 0x40, 0x44, 0xc3, 0x65, 0xbb, 0xc2},

    //CN=DigiNotar Services 1024 CA
    {0xfe, 0xdc, 0x94, 0x49, 0x0c, 0x6f, 0xef, 0x5c, 0x7f, 0xc6,
     0xf1, 0x12, 0x99, 0x4f, 0x16, 0x49, 0xad, 0xfb, 0x82, 0x65},

    //DigiNotar PKIoverheid CA Organisatie - G2
    {0xbc, 0x5d, 0x94, 0x3b, 0xd9, 0xab, 0x7b, 0x03, 0x25, 0x73,
     0x61, 0xc2, 0xdb, 0x2d, 0xee, 0xfc, 0xab, 0x8f, 0x65, 0xa1},
};