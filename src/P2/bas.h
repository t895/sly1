#pragma once
#include <stdint.h>
#include <util.h>

enum BASK : int
{
    BASK_Nil = -1,
    BASK_Cd = 1,
    BASK_Host = 0,
    BASK_Max = 2
};

class CBinaryAsyncStream
{
public:
    BASK m_bask;
    int m_fd;
    uint32_t m_isector;
    int m_cbSpooling;
    BYTE* m_pbSpooling;
    BYTE* m_abSpool;
    int m_cb;
    BYTE* m_pb;
    int m_ibCur;
    int m_cbUnspooled;
    int m_cbFile;

    CBinaryAsyncStream(void* pvSpool); // constructor
    ~CBinaryAsyncStream(); // todo destructor

    void Close(); // todo
};

