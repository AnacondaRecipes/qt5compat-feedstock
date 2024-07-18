#include <QLinkedList>
#include <QString>

int main() {
    QLinkedList<QString> list;
    return (list.count() == 0)? 0: 1;
}
