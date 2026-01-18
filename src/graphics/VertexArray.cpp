#include "VertexArray.h"

VertexArray::VertexArray()
{
    glGenVertexArrays(1, &m_ID);
}

VertexArray::~VertexArray()
{
    glDeleteVertexArrays(1, &m_ID);
}

void VertexArray::bind() const
{
    glBindVertexArray(m_ID);
}

void VertexArray::unbind() const
{
    glBindVertexArray(0);
}

void VertexArray::addVertexAttributs(
    unsigned int index, 
    int count, 
    unsigned int type, 
    bool normalized, 
    int stride, 
    const void *offset)
{
    glEnableVertexAttribArray(index);
    glVertexAttribPointer(
        index,
        count,
        type,
        normalized ? GL_TRUE : GL_FALSE,
        stride,
        offset
    );
}
