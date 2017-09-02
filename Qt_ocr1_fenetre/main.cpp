#include <QApplication>
#include <QPushButton>
#include <QFont>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QPushButton bouton("Salut les Zéros, la forme ?");
    bouton.setText("Pimp mon bouton !");
    bouton.setToolTip("message pour tapette");
    QFont saboFont("slabo",25, QFont::Bold);
    bouton.setFont(saboFont);
    bouton.setCursor(Qt::PointingHandCursor);
    bouton.setIcon(QIcon("images/clown.png"));

    bouton.show();
    return app.exec();
}
