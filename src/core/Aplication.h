#pragma once

class Aplication
{
public:

    Aplication();
    void run();

private:
    void processInput();
    void update(float dt);
    void render();

    bool running;
};

