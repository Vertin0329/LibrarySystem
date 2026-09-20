/****************************************************************************
** Meta object code from reading C++ file 'QZXing.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../QZXing/QZXing.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QZXing.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN6QZXingE_t {};
} // unnamed namespace

template <> constexpr inline auto QZXing::qt_create_metaobjectdata<qt_meta_tag_ZN6QZXingE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QZXing",
        "decodingStarted",
        "",
        "decodingFinished",
        "succeeded",
        "enabledFormatsChanged",
        "tagFound",
        "tag",
        "tagFoundAdvanced",
        "format",
        "charSet",
        "QRectF",
        "rect",
        "QVariantMap",
        "metadata",
        "error",
        "msg",
        "decodeImage",
        "QImage",
        "image",
        "maxWidth",
        "maxHeight",
        "smoothTransformation",
        "decodeImageFromFile",
        "imageFilePath",
        "decodeImageQML",
        "item",
        "decodeSubImageQML",
        "offsetX",
        "offsetY",
        "width",
        "height",
        "QUrl",
        "imageUrl",
        "encodeData",
        "data",
        "QZXingEncoderConfig",
        "encoderConfig",
        "EncoderFormat",
        "encoderFormat",
        "QSize",
        "encoderImageSize",
        "EncodeErrorCorrectionLevel",
        "errorCorrectionLevel",
        "border",
        "transparent",
        "getProcessTimeOfLastDecoding",
        "getEnabledFormats",
        "setDecoder",
        "hint",
        "foundedFormat",
        "processingTime",
        "enabledDecoders",
        "tryHarderType",
        "imageSourceFilter",
        "tryHarder",
        "allowedExtensions",
        "QVariantList",
        "DecoderFormat",
        "DecoderFormat_None",
        "DecoderFormat_Aztec",
        "DecoderFormat_CODABAR",
        "DecoderFormat_CODE_39",
        "DecoderFormat_CODE_93",
        "DecoderFormat_CODE_128",
        "DecoderFormat_DATA_MATRIX",
        "DecoderFormat_EAN_8",
        "DecoderFormat_EAN_13",
        "DecoderFormat_ITF",
        "DecoderFormat_MAXICODE",
        "DecoderFormat_PDF_417",
        "DecoderFormat_QR_CODE",
        "DecoderFormat_RSS_14",
        "DecoderFormat_RSS_EXPANDED",
        "DecoderFormat_UPC_A",
        "DecoderFormat_UPC_E",
        "DecoderFormat_UPC_EAN_EXTENSION",
        "DecoderFormat_CODE_128_GS1",
        "TryHarderBehaviour",
        "TryHarderBehaviour_ThoroughScanning",
        "TryHarderBehaviour_Rotate",
        "SourceFilter",
        "SourceFilter_ImageNormal",
        "SourceFilter_ImageInverted"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'decodingStarted'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'decodingFinished'
        QtMocHelpers::SignalData<void(bool)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 4 },
        }}),
        // Signal 'enabledFormatsChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'tagFound'
        QtMocHelpers::SignalData<void(QString)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 7 },
        }}),
        // Signal 'tagFoundAdvanced'
        QtMocHelpers::SignalData<void(const QString &, const QString &, const QString &) const>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 7 }, { QMetaType::QString, 9 }, { QMetaType::QString, 10 },
        }}),
        // Signal 'tagFoundAdvanced'
        QtMocHelpers::SignalData<void(const QString &, const QString &, const QString &, const QRectF &) const>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 7 }, { QMetaType::QString, 9 }, { QMetaType::QString, 10 }, { 0x80000000 | 11, 12 },
        }}),
        // Signal 'tagFoundAdvanced'
        QtMocHelpers::SignalData<void(const QString &, const QString &, const QString &, const QVariantMap &) const>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 7 }, { QMetaType::QString, 9 }, { QMetaType::QString, 10 }, { 0x80000000 | 13, 14 },
        }}),
        // Signal 'error'
        QtMocHelpers::SignalData<void(QString)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 16 },
        }}),
        // Slot 'decodeImage'
        QtMocHelpers::SlotData<QString(const QImage &, int, int, bool)>(17, 2, QMC::AccessPublic, QMetaType::QString, {{
            { 0x80000000 | 18, 19 }, { QMetaType::Int, 20 }, { QMetaType::Int, 21 }, { QMetaType::Bool, 22 },
        }}),
        // Slot 'decodeImage'
        QtMocHelpers::SlotData<QString(const QImage &, int, int)>(17, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QString, {{
            { 0x80000000 | 18, 19 }, { QMetaType::Int, 20 }, { QMetaType::Int, 21 },
        }}),
        // Slot 'decodeImage'
        QtMocHelpers::SlotData<QString(const QImage &, int)>(17, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QString, {{
            { 0x80000000 | 18, 19 }, { QMetaType::Int, 20 },
        }}),
        // Slot 'decodeImage'
        QtMocHelpers::SlotData<QString(const QImage &)>(17, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QString, {{
            { 0x80000000 | 18, 19 },
        }}),
        // Slot 'decodeImageFromFile'
        QtMocHelpers::SlotData<QString(const QString &, int, int, bool)>(23, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QString, 24 }, { QMetaType::Int, 20 }, { QMetaType::Int, 21 }, { QMetaType::Bool, 22 },
        }}),
        // Slot 'decodeImageFromFile'
        QtMocHelpers::SlotData<QString(const QString &, int, int)>(23, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QString, {{
            { QMetaType::QString, 24 }, { QMetaType::Int, 20 }, { QMetaType::Int, 21 },
        }}),
        // Slot 'decodeImageFromFile'
        QtMocHelpers::SlotData<QString(const QString &, int)>(23, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QString, {{
            { QMetaType::QString, 24 }, { QMetaType::Int, 20 },
        }}),
        // Slot 'decodeImageFromFile'
        QtMocHelpers::SlotData<QString(const QString &)>(23, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QString, {{
            { QMetaType::QString, 24 },
        }}),
        // Slot 'decodeImageQML'
        QtMocHelpers::SlotData<QString(QObject *)>(25, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QObjectStar, 26 },
        }}),
        // Slot 'decodeSubImageQML'
        QtMocHelpers::SlotData<QString(QObject *, const int, const int, const int, const int)>(27, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QObjectStar, 26 }, { QMetaType::Int, 28 }, { QMetaType::Int, 29 }, { QMetaType::Int, 30 },
            { QMetaType::Int, 31 },
        }}),
        // Slot 'decodeSubImageQML'
        QtMocHelpers::SlotData<QString(QObject *, const int, const int, const int)>(27, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QString, {{
            { QMetaType::QObjectStar, 26 }, { QMetaType::Int, 28 }, { QMetaType::Int, 29 }, { QMetaType::Int, 30 },
        }}),
        // Slot 'decodeSubImageQML'
        QtMocHelpers::SlotData<QString(QObject *, const int, const int)>(27, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QString, {{
            { QMetaType::QObjectStar, 26 }, { QMetaType::Int, 28 }, { QMetaType::Int, 29 },
        }}),
        // Slot 'decodeSubImageQML'
        QtMocHelpers::SlotData<QString(QObject *, const int)>(27, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QString, {{
            { QMetaType::QObjectStar, 26 }, { QMetaType::Int, 28 },
        }}),
        // Slot 'decodeSubImageQML'
        QtMocHelpers::SlotData<QString(QObject *)>(27, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QString, {{
            { QMetaType::QObjectStar, 26 },
        }}),
        // Slot 'decodeImageQML'
        QtMocHelpers::SlotData<QString(const QUrl &)>(25, 2, QMC::AccessPublic, QMetaType::QString, {{
            { 0x80000000 | 32, 33 },
        }}),
        // Slot 'decodeSubImageQML'
        QtMocHelpers::SlotData<QString(const QUrl &, const int, const int, const int, const int)>(27, 2, QMC::AccessPublic, QMetaType::QString, {{
            { 0x80000000 | 32, 33 }, { QMetaType::Int, 28 }, { QMetaType::Int, 29 }, { QMetaType::Int, 30 },
            { QMetaType::Int, 31 },
        }}),
        // Slot 'decodeSubImageQML'
        QtMocHelpers::SlotData<QString(const QUrl &, const int, const int, const int)>(27, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QString, {{
            { 0x80000000 | 32, 33 }, { QMetaType::Int, 28 }, { QMetaType::Int, 29 }, { QMetaType::Int, 30 },
        }}),
        // Slot 'decodeSubImageQML'
        QtMocHelpers::SlotData<QString(const QUrl &, const int, const int)>(27, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QString, {{
            { 0x80000000 | 32, 33 }, { QMetaType::Int, 28 }, { QMetaType::Int, 29 },
        }}),
        // Slot 'decodeSubImageQML'
        QtMocHelpers::SlotData<QString(const QUrl &, const int)>(27, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QString, {{
            { 0x80000000 | 32, 33 }, { QMetaType::Int, 28 },
        }}),
        // Slot 'decodeSubImageQML'
        QtMocHelpers::SlotData<QString(const QUrl &)>(27, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QString, {{
            { 0x80000000 | 32, 33 },
        }}),
        // Slot 'encodeData'
        QtMocHelpers::SlotData<QImage(const QString &, const QZXingEncoderConfig &)>(34, 2, QMC::AccessPublic, 0x80000000 | 18, {{
            { QMetaType::QString, 35 }, { 0x80000000 | 36, 37 },
        }}),
        // Slot 'encodeData'
        QtMocHelpers::SlotData<QImage(const QString &, const EncoderFormat, const QSize, const EncodeErrorCorrectionLevel, const bool, const bool)>(34, 2, QMC::AccessPublic, 0x80000000 | 18, {{
            { QMetaType::QString, 35 }, { 0x80000000 | 38, 39 }, { 0x80000000 | 40, 41 }, { 0x80000000 | 42, 43 },
            { QMetaType::Bool, 44 }, { QMetaType::Bool, 45 },
        }}),
        // Slot 'encodeData'
        QtMocHelpers::SlotData<QImage(const QString &, const EncoderFormat, const QSize, const EncodeErrorCorrectionLevel, const bool)>(34, 2, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 18, {{
            { QMetaType::QString, 35 }, { 0x80000000 | 38, 39 }, { 0x80000000 | 40, 41 }, { 0x80000000 | 42, 43 },
            { QMetaType::Bool, 44 },
        }}),
        // Slot 'encodeData'
        QtMocHelpers::SlotData<QImage(const QString &, const EncoderFormat, const QSize, const EncodeErrorCorrectionLevel)>(34, 2, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 18, {{
            { QMetaType::QString, 35 }, { 0x80000000 | 38, 39 }, { 0x80000000 | 40, 41 }, { 0x80000000 | 42, 43 },
        }}),
        // Slot 'encodeData'
        QtMocHelpers::SlotData<QImage(const QString &, const EncoderFormat, const QSize)>(34, 2, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 18, {{
            { QMetaType::QString, 35 }, { 0x80000000 | 38, 39 }, { 0x80000000 | 40, 41 },
        }}),
        // Slot 'encodeData'
        QtMocHelpers::SlotData<QImage(const QString &, const EncoderFormat)>(34, 2, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 18, {{
            { QMetaType::QString, 35 }, { 0x80000000 | 38, 39 },
        }}),
        // Slot 'encodeData'
        QtMocHelpers::SlotData<QImage(const QString &)>(34, 2, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 18, {{
            { QMetaType::QString, 35 },
        }}),
        // Slot 'getProcessTimeOfLastDecoding'
        QtMocHelpers::SlotData<int()>(46, 2, QMC::AccessPublic, QMetaType::Int),
        // Slot 'getEnabledFormats'
        QtMocHelpers::SlotData<uint() const>(47, 2, QMC::AccessPublic, QMetaType::UInt),
        // Slot 'setDecoder'
        QtMocHelpers::SlotData<void(const uint &)>(48, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 49 },
        }}),
        // Method 'foundedFormat'
        QtMocHelpers::MethodData<QString() const>(50, 2, QMC::AccessPublic, QMetaType::QString),
        // Method 'charSet'
        QtMocHelpers::MethodData<QString() const>(10, 2, QMC::AccessPublic, QMetaType::QString),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'processingTime'
        QtMocHelpers::PropertyData<int>(51, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'enabledDecoders'
        QtMocHelpers::PropertyData<uint>(52, QMetaType::UInt, QMC::DefaultPropertyFlags | QMC::Writable, 2),
        // property 'tryHarderType'
        QtMocHelpers::PropertyData<uint>(53, QMetaType::UInt, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'imageSourceFilter'
        QtMocHelpers::PropertyData<uint>(54, QMetaType::UInt, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'tryHarder'
        QtMocHelpers::PropertyData<bool>(55, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'allowedExtensions'
        QtMocHelpers::PropertyData<QVariantList>(56, 0x80000000 | 57, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'DecoderFormat'
        QtMocHelpers::EnumData<enum DecoderFormat>(58, 58, QMC::EnumFlags{}).add({
            {   59, DecoderFormat::DecoderFormat_None },
            {   60, DecoderFormat::DecoderFormat_Aztec },
            {   61, DecoderFormat::DecoderFormat_CODABAR },
            {   62, DecoderFormat::DecoderFormat_CODE_39 },
            {   63, DecoderFormat::DecoderFormat_CODE_93 },
            {   64, DecoderFormat::DecoderFormat_CODE_128 },
            {   65, DecoderFormat::DecoderFormat_DATA_MATRIX },
            {   66, DecoderFormat::DecoderFormat_EAN_8 },
            {   67, DecoderFormat::DecoderFormat_EAN_13 },
            {   68, DecoderFormat::DecoderFormat_ITF },
            {   69, DecoderFormat::DecoderFormat_MAXICODE },
            {   70, DecoderFormat::DecoderFormat_PDF_417 },
            {   71, DecoderFormat::DecoderFormat_QR_CODE },
            {   72, DecoderFormat::DecoderFormat_RSS_14 },
            {   73, DecoderFormat::DecoderFormat_RSS_EXPANDED },
            {   74, DecoderFormat::DecoderFormat_UPC_A },
            {   75, DecoderFormat::DecoderFormat_UPC_E },
            {   76, DecoderFormat::DecoderFormat_UPC_EAN_EXTENSION },
            {   77, DecoderFormat::DecoderFormat_CODE_128_GS1 },
        }),
        // enum 'TryHarderBehaviour'
        QtMocHelpers::EnumData<enum TryHarderBehaviour>(78, 78, QMC::EnumFlags{}).add({
            {   79, TryHarderBehaviour::TryHarderBehaviour_ThoroughScanning },
            {   80, TryHarderBehaviour::TryHarderBehaviour_Rotate },
        }),
        // enum 'SourceFilter'
        QtMocHelpers::EnumData<enum SourceFilter>(81, 81, QMC::EnumFlags{}).add({
            {   82, SourceFilter::SourceFilter_ImageNormal },
            {   83, SourceFilter::SourceFilter_ImageInverted },
        }),
    };
    return QtMocHelpers::metaObjectData<QZXing, qt_meta_tag_ZN6QZXingE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QZXing::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6QZXingE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6QZXingE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6QZXingE_t>.metaTypes,
    nullptr
} };

void QZXing::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QZXing *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->decodingStarted(); break;
        case 1: _t->decodingFinished((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->enabledFormatsChanged(); break;
        case 3: _t->tagFound((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->tagFoundAdvanced((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3]))); break;
        case 5: _t->tagFoundAdvanced((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QRectF>>(_a[4]))); break;
        case 6: _t->tagFoundAdvanced((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QVariantMap>>(_a[4]))); break;
        case 7: _t->error((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: { QString _r = _t->decodeImage((*reinterpret_cast<std::add_pointer_t<QImage>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[4])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 9: { QString _r = _t->decodeImage((*reinterpret_cast<std::add_pointer_t<QImage>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 10: { QString _r = _t->decodeImage((*reinterpret_cast<std::add_pointer_t<QImage>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 11: { QString _r = _t->decodeImage((*reinterpret_cast<std::add_pointer_t<QImage>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 12: { QString _r = _t->decodeImageFromFile((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[4])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 13: { QString _r = _t->decodeImageFromFile((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 14: { QString _r = _t->decodeImageFromFile((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 15: { QString _r = _t->decodeImageFromFile((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 16: { QString _r = _t->decodeImageQML((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 17: { QString _r = _t->decodeSubImageQML((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[5])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 18: { QString _r = _t->decodeSubImageQML((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 19: { QString _r = _t->decodeSubImageQML((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 20: { QString _r = _t->decodeSubImageQML((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 21: { QString _r = _t->decodeSubImageQML((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 22: { QString _r = _t->decodeImageQML((*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 23: { QString _r = _t->decodeSubImageQML((*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[5])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 24: { QString _r = _t->decodeSubImageQML((*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 25: { QString _r = _t->decodeSubImageQML((*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 26: { QString _r = _t->decodeSubImageQML((*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 27: { QString _r = _t->decodeSubImageQML((*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 28: { QImage _r = _t->encodeData((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QZXingEncoderConfig>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QImage*>(_a[0]) = std::move(_r); }  break;
        case 29: { QImage _r = _t->encodeData((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<enum EncoderFormat>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QSize>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<enum EncodeErrorCorrectionLevel>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[6])));
            if (_a[0]) *reinterpret_cast<QImage*>(_a[0]) = std::move(_r); }  break;
        case 30: { QImage _r = _t->encodeData((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<enum EncoderFormat>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QSize>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<enum EncodeErrorCorrectionLevel>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[5])));
            if (_a[0]) *reinterpret_cast<QImage*>(_a[0]) = std::move(_r); }  break;
        case 31: { QImage _r = _t->encodeData((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<enum EncoderFormat>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QSize>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<enum EncodeErrorCorrectionLevel>>(_a[4])));
            if (_a[0]) *reinterpret_cast<QImage*>(_a[0]) = std::move(_r); }  break;
        case 32: { QImage _r = _t->encodeData((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<enum EncoderFormat>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QSize>>(_a[3])));
            if (_a[0]) *reinterpret_cast<QImage*>(_a[0]) = std::move(_r); }  break;
        case 33: { QImage _r = _t->encodeData((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<enum EncoderFormat>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QImage*>(_a[0]) = std::move(_r); }  break;
        case 34: { QImage _r = _t->encodeData((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QImage*>(_a[0]) = std::move(_r); }  break;
        case 35: { int _r = _t->getProcessTimeOfLastDecoding();
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 36: { uint _r = _t->getEnabledFormats();
            if (_a[0]) *reinterpret_cast<uint*>(_a[0]) = std::move(_r); }  break;
        case 37: _t->setDecoder((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1]))); break;
        case 38: { QString _r = _t->foundedFormat();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 39: { QString _r = _t->charSet();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QZXing::*)()>(_a, &QZXing::decodingStarted, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (QZXing::*)(bool )>(_a, &QZXing::decodingFinished, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (QZXing::*)()>(_a, &QZXing::enabledFormatsChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (QZXing::*)(QString )>(_a, &QZXing::tagFound, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (QZXing::*)(const QString & , const QString & , const QString & ) const>(_a, &QZXing::tagFoundAdvanced, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (QZXing::*)(const QString & , const QString & , const QString & , const QRectF & ) const>(_a, &QZXing::tagFoundAdvanced, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (QZXing::*)(const QString & , const QString & , const QString & , const QVariantMap & ) const>(_a, &QZXing::tagFoundAdvanced, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (QZXing::*)(QString )>(_a, &QZXing::error, 7))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->getProcessTimeOfLastDecoding(); break;
        case 1: *reinterpret_cast<uint*>(_v) = _t->getEnabledFormats(); break;
        case 2: *reinterpret_cast<uint*>(_v) = _t->getTryHarderBehaviour(); break;
        case 3: *reinterpret_cast<uint*>(_v) = _t->getSourceFilterType(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->getTryHarder(); break;
        case 5: *reinterpret_cast<QVariantList*>(_v) = _t->getAllowedExtensions(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setDecoder(*reinterpret_cast<uint*>(_v)); break;
        case 2: _t->setTryHarderBehaviour(*reinterpret_cast<uint*>(_v)); break;
        case 3: _t->setSourceFilterType(*reinterpret_cast<uint*>(_v)); break;
        case 4: _t->setTryHarder(*reinterpret_cast<bool*>(_v)); break;
        case 5: _t->setAllowedExtensions(*reinterpret_cast<QVariantList*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QZXing::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QZXing::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6QZXingE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QZXing::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 40)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 40)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 40;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QZXing::decodingStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QZXing::decodingFinished(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void QZXing::enabledFormatsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QZXing::tagFound(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void QZXing::tagFoundAdvanced(const QString & _t1, const QString & _t2, const QString & _t3)const
{
    QMetaObject::activate<void>(const_cast< QZXing *>(this), &staticMetaObject, 4, nullptr, _t1, _t2, _t3);
}

// SIGNAL 5
void QZXing::tagFoundAdvanced(const QString & _t1, const QString & _t2, const QString & _t3, const QRectF & _t4)const
{
    QMetaObject::activate<void>(const_cast< QZXing *>(this), &staticMetaObject, 5, nullptr, _t1, _t2, _t3, _t4);
}

// SIGNAL 6
void QZXing::tagFoundAdvanced(const QString & _t1, const QString & _t2, const QString & _t3, const QVariantMap & _t4)const
{
    QMetaObject::activate<void>(const_cast< QZXing *>(this), &staticMetaObject, 6, nullptr, _t1, _t2, _t3, _t4);
}

// SIGNAL 7
void QZXing::error(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}
QT_WARNING_POP
