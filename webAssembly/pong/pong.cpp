/*
 * =====================================================================================
 *
 *       Filename:  pong.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  13/03/19 16:16:45
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Yeiner (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <cheerp/clientlib.h>
#include <cheerp/client.h>

class [[cheerp::genericjs]] Graphics 
{
    private:
        static client::HTMLCanvasElement* canvas;
        static client::CanvasRenderingContext2D* canvasCtx;
        static int width;
        static int height;

    public:
        static void initializeCanvas(int w, int h)
        {
            width = w;
            height = h;
            canvas = (client::HTMLCanvasElement*)client::document.getElementById("pongcanvas");
            canvas->set_width(w);
            canvas->set_height(h);
            client::document.get_body()->appendChild(canvas);
            canvasCtx = (client::CanvasRenderingContext2D*)canvas->getContext("2d");
        }
        
        static void debugOutput(const char* str)
        {
            canvasCtx->set_font("24px sans-serif");
            canvasCtx->fillText(str, 0, height - 24);
            client::console.log("str", str);
            client::console.log("Height", height);
        }
};

void webMain()
{
    Graphics::initializeCanvas(400, 400);
    Graphics::debugOutput("Hello Canvas");
}
