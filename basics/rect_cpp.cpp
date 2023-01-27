class Rectangle
{
    private:
        int length;
        int width;

    public:
        Rectangle(int length, int width)
        {
            this->setLength(length);
            this->setWidth(width);
        }

        void setLength(int length)
        {
            this->length = length
        }

        void setWidth(int width)
        {
            this->width = width;
        }

        int area()
        {
            return this->length * this->width;
        }
};