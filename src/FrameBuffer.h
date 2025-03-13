#ifndef FrameBuffer_h
#define FrameBuffer_h

class FrameBuffer
{
    public:
        int frameWidth;
        int frameHeight;
        inline FrameBuffer(int width, int height)
        {
            this->frameWidth=width;
            this->frameHeight=height;
            this->pixels[this->frameWidth][this->frameWidth];
        };
        void toggle(int xx, int yy);
        void straightLine(int x1, int x2, int y1, int y2);
        void drawline(int x1, int x2, int y1, int y2);
        
    private:
        int** pixels;
    

};


#endif