//----------------------------------------------------------------------------
#ifndef AboutH
#define AboutH
//----------------------------------------------------------------------------
#include <vcl\System.hpp>
#include <vcl\Windows.hpp>
#include <vcl\SysUtils.hpp>
#include <vcl\Classes.hpp>
#include <vcl\Graphics.hpp>
#include <vcl\Forms.hpp>
#include <vcl\Controls.hpp>
#include <vcl\StdCtrls.hpp>
#include <vcl\Buttons.hpp>
#include <vcl\ExtCtrls.hpp>
//----------------------------------------------------------------------------
#include <Configuration.h>
//----------------------------------------------------------------------------
class TAboutDialog : public TForm
{
__published:
  TPanel *ImagePanel;
  TShape *ImageShape;
  TImage *Image;
  TLabel *ApplicationLabel;
  TLabel *VersionLabel;
  TLabel *Label2;
  TLabel *HomepageLabel;
  TLabel *ProductSpecificMessageLabel;
  TLabel *ProductUrlLabel;
  TScrollBox *ThirdPartyBox;
  TLabel *Label3;
  TLabel *Label5;
  TLabel *Label6;
  TLabel *PuttyHomepageLabel;
  TLabel *Label7;
  TLabel *Label8;
  TLabel *FilemanagerHomepageLabel;
  TLabel *Label10;
  TLabel *Label11;
  TLabel *Label12;
  TLabel *DragNDropHomepageLabel1;
  TLabel *DragNDropHomepageLabel2;
  TLabel *ProlongBoxLabel;
  TButton *OKButton;
  TButton *LicenceButton;
  TLabel *PuttyLicenceLabel;
  void __fastcall HomepageLabelClick(TObject *Sender);
  void __fastcall EmailLabelClick(TObject *Sender);
  void __fastcall DragNDropHomepageLabelClick(TObject *Sender);
  void __fastcall DisplayLicence(TObject *Sender);
  void __fastcall LicenceButtonClick(TObject *Sender);
private:
  TConfiguration * FConfiguration;
  void __fastcall SetConfiguration(TConfiguration * value);
public:
  virtual __fastcall TAboutDialog(TComponent* AOwner);
  void __fastcall LoadData();
  __property TConfiguration * Configuration  = { read=FConfiguration, write=SetConfiguration };
protected:
  void __fastcall OpenAddress(const AnsiString Address);
};
//----------------------------------------------------------------------------
#endif
