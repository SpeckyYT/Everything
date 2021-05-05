#include <qapplication.h>
#include <qlabel.h>

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  QLabel l("Everything", 0);
  l.setCaption("Test");
  l.setAlignment(Qt::AlignCenter);
  l.resize(300, 200);
  a.setMainWidget(&l);
  l.show();
  return(a.exec());
}
