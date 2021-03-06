
#ifndef __CRSCLSID_H__
#define __CRSCLSID_H__

//
// CLSID's for the CRS COM Objects
//

// {B5237E80-17FF-11d0-9B95-00C04FD5CD09}
DEFINE_GUID(CLSID_ReplicationServer, 
0xb5237e80, 0x17ff, 0x11d0, 0x9b, 0x95, 0x0, 0xc0, 0x4f, 0xd5, 0xcd, 0x9);

// {B5237E81-17FF-11d0-9B95-00C04FD5CD09}
DEFINE_GUID(CLSID_ReplicationProject, 
0xb5237e81, 0x17ff, 0x11d0, 0x9b, 0x95, 0x0, 0xc0, 0x4f, 0xd5, 0xcd, 0x9);

// {B5237E82-17FF-11d0-9B95-00C04FD5CD09}
DEFINE_GUID(CLSID_ReplicationInstance, 
0xb5237e82, 0x17ff, 0x11d0, 0x9b, 0x95, 0x0, 0xc0, 0x4f, 0xd5, 0xcd, 0x9);

// {EAC92DC0-2166-11d0-9B97-00C04FD5CD09}
DEFINE_GUID(CLSID_ReplicationRoute,
0xeac92dc0, 0x2166, 0x11d0, 0x9b, 0x97, 0x0, 0xc0, 0x4f, 0xd5, 0xcd, 0x9);


// {E26EA570-1737-11d0-9B95-00C04FD5CD09}
DEFINE_GUID(IID_IReplicationServer, 
0x66D6D7E9,0x22D2,0x11D0,0x9B,0x98,0x00,0xC0,0x4F,0xD5,0xCD,0x09);

// {E26EA571-1737-11d0-9B95-00C04FD5CD09}
DEFINE_GUID(IID_IReplicationProject, 
0x66D6D7EE,0x22D2,0x11D0,0x9B,0x98,0x00,0xC0,0x4F,0xD5,0xCD,0x09);

// {E26EA572-1737-11d0-9B95-00C04FD5CD09}
DEFINE_GUID(IID_IReplicationInstance, 
0x66D6D7F3,0x22D2,0x11D0,0x9B,0x98,0x00,0xC0,0x4F,0xD5,0xCD,0x09);

// {EAC92DC1-2166-11d0-9B97-00C04FD5CD09}
DEFINE_GUID(IID_IReplicationRoute,
0x66D6D7F8,0x22D2,0x11D0,0x9B,0x98,0x00,0xC0,0x4F,0xD5,0xCD,0x09);

#endif