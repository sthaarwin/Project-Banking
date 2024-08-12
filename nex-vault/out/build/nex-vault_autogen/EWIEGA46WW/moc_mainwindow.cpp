/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../mainwindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.1. It"
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

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "StartDBConnection",
    "",
    "StopDBConnection",
    "on_loginButton_clicked",
    "on_logoutButton_clicked",
    "on_forgotPassowordButton_clicked",
    "on_createaccountButton_clicked",
    "on_LoginOnSighnupButton_clicked",
    "on_continue_1_clicked",
    "on_continue_2_clicked",
    "on_continue_3_clicked",
    "on_signupButton_clicked",
    "on_backbutton_1_onsignup_clicked",
    "on_backbutton_2_onsignup_clicked",
    "on_backbutton_3_onsignup_clicked",
    "on_login_on_recovery_clicked",
    "on_confirm_button_on_recovery_clicked",
    "on_recovery_button_on_recovery_clicked",
    "getdatabasepath",
    "validate_login",
    "validate_recovery",
    "check_email",
    "check_password",
    "check_phone_number",
    "generateCreditCardNumber",
    "generateAccountNumber",
    "check_credit_card_number",
    "check_account_number",
    "generateCreditCardExpiry",
    "clear_fields",
    "createTransactionTable",
    "StartUISetup",
    "start_admin_ui",
    "on_transer_funds_button_clicked",
    "on_request_funds_button_clicked",
    "on_back_on_transaction_clicked",
    "on_continue_on_transaction_clicked",
    "on_back_on_verify_clicked",
    "on_confirm_transaction",
    "on_history_clicked",
    "on_back_on_history_clicked",
    "on_back_on_request_clicked",
    "on_request_button_on_request_clicked",
    "handleRequestStatus",
    "newStatus",
    "approveRequest",
    "declineRequest"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      45,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  284,    2, 0x08,    1 /* Private */,
       3,    0,  285,    2, 0x08,    2 /* Private */,
       4,    0,  286,    2, 0x08,    3 /* Private */,
       5,    0,  287,    2, 0x08,    4 /* Private */,
       6,    0,  288,    2, 0x08,    5 /* Private */,
       7,    0,  289,    2, 0x08,    6 /* Private */,
       8,    0,  290,    2, 0x08,    7 /* Private */,
       9,    0,  291,    2, 0x08,    8 /* Private */,
      10,    0,  292,    2, 0x08,    9 /* Private */,
      11,    0,  293,    2, 0x08,   10 /* Private */,
      12,    0,  294,    2, 0x08,   11 /* Private */,
      13,    0,  295,    2, 0x08,   12 /* Private */,
      14,    0,  296,    2, 0x08,   13 /* Private */,
      15,    0,  297,    2, 0x08,   14 /* Private */,
      16,    0,  298,    2, 0x08,   15 /* Private */,
      17,    0,  299,    2, 0x08,   16 /* Private */,
      18,    0,  300,    2, 0x08,   17 /* Private */,
      19,    0,  301,    2, 0x08,   18 /* Private */,
      20,    2,  302,    2, 0x08,   19 /* Private */,
      21,    3,  307,    2, 0x08,   22 /* Private */,
      22,    1,  314,    2, 0x08,   26 /* Private */,
      23,    2,  317,    2, 0x08,   28 /* Private */,
      24,    1,  322,    2, 0x08,   31 /* Private */,
      25,    0,  325,    2, 0x08,   33 /* Private */,
      26,    0,  326,    2, 0x08,   34 /* Private */,
      27,    1,  327,    2, 0x08,   35 /* Private */,
      28,    1,  330,    2, 0x08,   37 /* Private */,
      29,    0,  333,    2, 0x08,   39 /* Private */,
      30,    0,  334,    2, 0x08,   40 /* Private */,
      31,    1,  335,    2, 0x08,   41 /* Private */,
      32,    1,  338,    2, 0x08,   43 /* Private */,
      33,    0,  341,    2, 0x08,   45 /* Private */,
      34,    0,  342,    2, 0x08,   46 /* Private */,
      35,    0,  343,    2, 0x08,   47 /* Private */,
      36,    0,  344,    2, 0x08,   48 /* Private */,
      37,    0,  345,    2, 0x08,   49 /* Private */,
      38,    0,  346,    2, 0x08,   50 /* Private */,
      39,    0,  347,    2, 0x08,   51 /* Private */,
      40,    0,  348,    2, 0x08,   52 /* Private */,
      41,    0,  349,    2, 0x08,   53 /* Private */,
      42,    0,  350,    2, 0x08,   54 /* Private */,
      43,    0,  351,    2, 0x08,   55 /* Private */,
      44,    1,  352,    2, 0x08,   56 /* Private */,
      46,    0,  355,    2, 0x08,   58 /* Private */,
      47,    0,  356,    2, 0x08,   59 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString,
    QMetaType::Bool, QMetaType::Long, QMetaType::QString,    2,    2,
    QMetaType::Bool, QMetaType::Long, QMetaType::QString, QMetaType::QString,    2,    2,    2,
    QMetaType::Bool, QMetaType::QString,    2,
    QMetaType::Bool, QMetaType::QString, QMetaType::Long,    2,    2,
    QMetaType::Bool, QMetaType::Long,    2,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Bool, QMetaType::QString,    2,
    QMetaType::Bool, QMetaType::QString,    2,
    QMetaType::QString,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   45,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'StartDBConnection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'StopDBConnection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_loginButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_logoutButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_forgotPassowordButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_createaccountButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_LoginOnSighnupButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_continue_1_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_continue_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_continue_3_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_signupButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_backbutton_1_onsignup_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_backbutton_2_onsignup_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_backbutton_3_onsignup_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_login_on_recovery_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_confirm_button_on_recovery_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_recovery_button_on_recovery_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getdatabasepath'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'validate_login'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<long int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'validate_recovery'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<long int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'check_email'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'check_password'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<long int, std::false_type>,
        // method 'check_phone_number'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<long int, std::false_type>,
        // method 'generateCreditCardNumber'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'generateAccountNumber'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'check_credit_card_number'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'check_account_number'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'generateCreditCardExpiry'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'clear_fields'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'createTransactionTable'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'StartUISetup'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'start_admin_ui'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_transer_funds_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_request_funds_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_back_on_transaction_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_continue_on_transaction_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_back_on_verify_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_confirm_transaction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_history_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_back_on_history_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_back_on_request_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_request_button_on_request_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleRequestStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'approveRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'declineRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->StartDBConnection(); break;
        case 1: _t->StopDBConnection(); break;
        case 2: _t->on_loginButton_clicked(); break;
        case 3: _t->on_logoutButton_clicked(); break;
        case 4: _t->on_forgotPassowordButton_clicked(); break;
        case 5: _t->on_createaccountButton_clicked(); break;
        case 6: _t->on_LoginOnSighnupButton_clicked(); break;
        case 7: _t->on_continue_1_clicked(); break;
        case 8: _t->on_continue_2_clicked(); break;
        case 9: _t->on_continue_3_clicked(); break;
        case 10: _t->on_signupButton_clicked(); break;
        case 11: _t->on_backbutton_1_onsignup_clicked(); break;
        case 12: _t->on_backbutton_2_onsignup_clicked(); break;
        case 13: _t->on_backbutton_3_onsignup_clicked(); break;
        case 14: _t->on_login_on_recovery_clicked(); break;
        case 15: _t->on_confirm_button_on_recovery_clicked(); break;
        case 16: _t->on_recovery_button_on_recovery_clicked(); break;
        case 17: { QString _r = _t->getdatabasepath();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 18: { bool _r = _t->validate_login((*reinterpret_cast< std::add_pointer_t<long>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 19: { bool _r = _t->validate_recovery((*reinterpret_cast< std::add_pointer_t<long>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 20: { bool _r = _t->check_email((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 21: { bool _r = _t->check_password((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<long>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 22: { bool _r = _t->check_phone_number((*reinterpret_cast< std::add_pointer_t<long>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 23: { QString _r = _t->generateCreditCardNumber();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 24: { QString _r = _t->generateAccountNumber();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 25: { bool _r = _t->check_credit_card_number((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 26: { bool _r = _t->check_account_number((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 27: { QString _r = _t->generateCreditCardExpiry();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 28: _t->clear_fields(); break;
        case 29: { bool _r = _t->createTransactionTable((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 30: _t->StartUISetup((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 31: _t->start_admin_ui(); break;
        case 32: _t->on_transer_funds_button_clicked(); break;
        case 33: _t->on_request_funds_button_clicked(); break;
        case 34: _t->on_back_on_transaction_clicked(); break;
        case 35: _t->on_continue_on_transaction_clicked(); break;
        case 36: _t->on_back_on_verify_clicked(); break;
        case 37: _t->on_confirm_transaction(); break;
        case 38: _t->on_history_clicked(); break;
        case 39: _t->on_back_on_history_clicked(); break;
        case 40: _t->on_back_on_request_clicked(); break;
        case 41: _t->on_request_button_on_request_clicked(); break;
        case 42: _t->handleRequestStatus((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 43: _t->approveRequest(); break;
        case 44: _t->declineRequest(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 45)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 45;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 45)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 45;
    }
    return _id;
}
QT_WARNING_POP
