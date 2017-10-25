#include "Ventana.h"



IMPLEMENT_APP_NO_MAIN(MyApp);
IMPLEMENT_WX_THEME_SUPPORT;

int main(int argc, char *argv[])
{
    wxEntryStart( argc, argv );
    wxTheApp->CallOnInit();
    wxTheApp->OnRun();
    wxTheApp->OnExit();
    wxEntryCleanup();

    /*Mat image;
    image = imread(Data::getInstance()->getData(), CV_LOAD_IMAGE_COLOR);

    namedWindow( "Display window", CV_WINDOW_AUTOSIZE );
    imshow( "Display window", image );
    waitKey(0);
    return 0;*/
}


bool MyApp::OnInit()
{
    MyFrame *frame = new MyFrame("Hello wxWidgets World");

    frame->Show(true);
}
MyFrame::MyFrame(const wxString& tittle)
        : wxFrame(NULL, wxID_ANY, "Hello World")
{



    wxPanel *panel=new wxPanel(this);
    this->SetSize(900, 900);
    wxPNGHandler *handler = new wxPNGHandler;
    wxImage::AddHandler(handler);


    wxButton *fileChooser = new wxButton(panel, ID_Boton, "Escoja la Imagen", wxPoint(80,80), wxSize(200,80));
    Connect(ID_Boton, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame::Boton));





    wxMenu *menuFile = new wxMenu;
    menuFile->Append(ID_Hello, "&Hello...\tCtrl-H",
                     "Help string shown in status bar for this menu item");
    menuFile->AppendSeparator();
    menuFile->Append(wxID_EXIT);
    wxMenu *menuHelp = new wxMenu;
    menuHelp->Append(wxID_ABOUT);
    wxMenuBar *menuBar = new wxMenuBar;
    menuBar->Append( menuFile, "&File" );
    menuBar->Append( menuHelp, "&Help" );
    SetMenuBar( menuBar );
    CreateStatusBar();
    SetStatusText( "Welcome to wxWidgets!" );
    Bind(wxEVT_MENU, &MyFrame::OnHello, this, ID_Hello);
    Bind(wxEVT_MENU, &MyFrame::OnAbout, this, wxID_ABOUT);
    Bind(wxEVT_MENU, &MyFrame::OnExit, this, wxID_EXIT);
}
void MyFrame::OnExit(wxCommandEvent& event)
{
    Close( true );
}
void MyFrame::OnAbout(wxCommandEvent& event)
{
    wxMessageBox( "This is a wxWidgets' Hello world sample",
                  "About Hello World", wxOK | wxICON_INFORMATION );
}
void MyFrame::OnHello(wxCommandEvent& event)
{
    wxLogMessage("Hello world from wxWidgets!");
}
void MyFrame::Boton(wxCommandEvent &event) {
    wxFileDialog* OpenDialog = new wxFileDialog(this,_("Choose a file to open"), wxEmptyString, wxEmptyString,
                                                _("Image Files (*.jpg, *.png, *.gif, *.bmp)|*.jpg;*.png;*.gif;*.bmp|Sound Files (*.wav, *.mp3)|*.wav;*.mp3"),
                                                wxFD_MULTIPLE);
    OpenDialog->ShowModal();
    string path;
    path = OpenDialog->GetPath();
    Data::getInstance()->setData(path);
    wxStaticBitmap *image;
    image = new wxStaticBitmap(this, wxID_ANY, wxBitmap(path, wxBITMAP_TYPE_ANY), wxPoint(300,400), wxSize(400, 510));




}