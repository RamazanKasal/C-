#include <wx/wx.h>

class MyApp : public wxApp{
    public:
        virtual bool OnInit();
};

class MyFrame : public wxFrame{
    public:
        MyFrame(const wxString& title, const wxPoint& pos, const wxSize& size);
};

wxIMPLEMENT_APP(MyApp);

bool MyApp::OnInit(){
    MyFrame* frame = new MyFrame("merhaba WXWIDGETS", wxPoint(350,50), wxSize(750,500));
    frame->Show();
    return true;
}

MyFrame::MyFrame(const wxString& title, const wxPoint& pos, const wxSize& size) : wxFrame(NULL,wxID_ANY,title,pos,size){

}