/*
 * Copyright (C) Alex Nekipelov (alex@nekipelov.net)
 * License: MIT
 */


#pragma once

#include <boost/noncopyable.hpp>

#include <string>
#include <list>

#include "config.h"

class RedisBuffer : boost::noncopyable {
public:
    inline RedisBuffer(const char *ptr, size_t size);
    inline RedisBuffer(const char *s);
    inline RedisBuffer(const std::string &s);
    inline RedisBuffer(const std::vector<char> &buf);

    inline size_t size() const;
    inline const char *data() const;

private:
    const char *ptr_;
    const size_t size_;
};


RedisBuffer::RedisBuffer(const char *ptr, size_t size)
    : ptr_(ptr), size_(size)
{
}

RedisBuffer::RedisBuffer(const char *s)
    : ptr_(s), size_(s == NULL ? 0 : strlen(s))
{
}

RedisBuffer::RedisBuffer(const std::string &s)
    : ptr_(s.c_str()), size_(s.length())
{
}

RedisBuffer::RedisBuffer(const std::vector<char> &buf)
    : ptr_(buf.empty() ? NULL : &buf[0]), size_(buf.size())
{
}

size_t RedisBuffer::size() const
{
    return size_;
}

const char *RedisBuffer::data() const
{
    return ptr_;
}
