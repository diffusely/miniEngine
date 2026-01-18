#include "Aplication.h"

Aplication::Aplication()
    : running(true)
{
    
}

void Aplication::run() 
{
    while (running) {
        float dt = 0.016f;
        processInput();
        update(dt);
        render();
    }
}

void Aplication::processInput()
{

}

void Aplication::update(float dt)
{

}

void Aplication::render()
{

}
