#include "qrcodegenerator.h"
#include "QZXing.h"

QImage generateQR(const QString &text){
    QZXing encoder;
    return encoder.encodeData(text);
}