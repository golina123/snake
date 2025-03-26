#pragma once

class view
{
        private:
                int a;
        public:
		virtual void  draw() = 0;
                static view *getview(const char*x);
};



