// wxWidgets "Hello world" Program
// For compilers that support precompilation, includes "wx/wx.h".
#include <wx/wxprec.h>
#include <iostream>
#include "opencv2/opencv.hpp"
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "data.h"
#ifndef WX_PRECOMP
#include <wx/wx.h>
#include <wx/sizer.h>
#endif
using namespace std;
using namespace cv;
class MyApp: public wxApp
{
public:
    virtual bool OnInit();
};

class MyFrame: public wxFrame
{
public:
    MyFrame(const wxString& tittle);

private:
    void OnHello(wxCommandEvent& event);
    void OnExit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
    void Boton(wxCommandEvent& event);
};
enum
{
    ID_Hello = 1,
    ID_Boton = 110,

};






