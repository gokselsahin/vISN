/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[178];
    char stringdata0[4093];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 36), // "on_cbSelectGraph_currentIndex..."
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 5), // "index"
QT_MOC_LITERAL(4, 55, 13), // "serialMessage"
QT_MOC_LITERAL(5, 69, 7), // "command"
QT_MOC_LITERAL(6, 77, 4), // "data"
QT_MOC_LITERAL(7, 82, 38), // "on_cbSelectProfile_currentInd..."
QT_MOC_LITERAL(8, 121, 19), // "on_bEditPro_clicked"
QT_MOC_LITERAL(9, 141, 20), // "on_bClearPro_clicked"
QT_MOC_LITERAL(10, 162, 19), // "on_bSavePro_clicked"
QT_MOC_LITERAL(11, 182, 14), // "updateTPreview"
QT_MOC_LITERAL(12, 197, 14), // "updateNPreview"
QT_MOC_LITERAL(13, 212, 20), // "on_bNewTStep_clicked"
QT_MOC_LITERAL(14, 233, 21), // "on_bTForward2_clicked"
QT_MOC_LITERAL(15, 255, 18), // "on_bTBack2_clicked"
QT_MOC_LITERAL(16, 274, 18), // "on_bTBack3_clicked"
QT_MOC_LITERAL(17, 293, 21), // "on_bTSaveStep_clicked"
QT_MOC_LITERAL(18, 315, 12), // "readProfiles"
QT_MOC_LITERAL(19, 328, 5), // "rType"
QT_MOC_LITERAL(20, 334, 42), // "on_cbSelectProfileMain_curren..."
QT_MOC_LITERAL(21, 377, 21), // "sendProfileOverSerial"
QT_MOC_LITERAL(22, 399, 4), // "mode"
QT_MOC_LITERAL(23, 404, 21), // "on_bStartTest_clicked"
QT_MOC_LITERAL(24, 426, 20), // "on_bStopTest_clicked"
QT_MOC_LITERAL(25, 447, 15), // "askSensorValues"
QT_MOC_LITERAL(26, 463, 13), // "askOtherStuff"
QT_MOC_LITERAL(27, 477, 18), // "getCurrentDateTime"
QT_MOC_LITERAL(28, 496, 17), // "prepareTestTimers"
QT_MOC_LITERAL(29, 514, 10), // "updateInfo"
QT_MOC_LITERAL(30, 525, 15), // "writeToLogTable"
QT_MOC_LITERAL(31, 541, 4), // "info"
QT_MOC_LITERAL(32, 546, 8), // "commInfo"
QT_MOC_LITERAL(33, 555, 6), // "status"
QT_MOC_LITERAL(34, 562, 11), // "updateTPlot"
QT_MOC_LITERAL(35, 574, 12), // "updatePPlots"
QT_MOC_LITERAL(36, 587, 11), // "profileSent"
QT_MOC_LITERAL(37, 599, 11), // "setupTGraph"
QT_MOC_LITERAL(38, 611, 12), // "setupPGraphs"
QT_MOC_LITERAL(39, 624, 11), // "setupVGraph"
QT_MOC_LITERAL(40, 636, 18), // "setupPreviewGraphs"
QT_MOC_LITERAL(41, 655, 12), // "setupVisuals"
QT_MOC_LITERAL(42, 668, 22), // "on_bScreenshot_clicked"
QT_MOC_LITERAL(43, 691, 20), // "on_bScreenshot_saved"
QT_MOC_LITERAL(44, 712, 15), // "on_bRes_clicked"
QT_MOC_LITERAL(45, 728, 15), // "on_bFan_clicked"
QT_MOC_LITERAL(46, 744, 22), // "on_bLightsMain_clicked"
QT_MOC_LITERAL(47, 767, 10), // "closeEvent"
QT_MOC_LITERAL(48, 778, 12), // "QCloseEvent*"
QT_MOC_LITERAL(49, 791, 5), // "event"
QT_MOC_LITERAL(50, 797, 25), // "on_bClearLogTable_clicked"
QT_MOC_LITERAL(51, 823, 16), // "clearProfileSlot"
QT_MOC_LITERAL(52, 840, 5), // "sType"
QT_MOC_LITERAL(53, 846, 5), // "pType"
QT_MOC_LITERAL(54, 852, 43), // "on_cbSelectMethodManual_curre..."
QT_MOC_LITERAL(55, 896, 44), // "on_cbSelectProfileManual_curr..."
QT_MOC_LITERAL(56, 941, 27), // "on_tabWidget_currentChanged"
QT_MOC_LITERAL(57, 969, 27), // "on_bSendProfileMain_clicked"
QT_MOC_LITERAL(58, 997, 27), // "on_bStartTestManual_clicked"
QT_MOC_LITERAL(59, 1025, 26), // "on_bStopTestManual_clicked"
QT_MOC_LITERAL(60, 1052, 29), // "on_bSendProfileManual_clicked"
QT_MOC_LITERAL(61, 1082, 27), // "on_bPauseTestManual_clicked"
QT_MOC_LITERAL(62, 1110, 21), // "on_bPauseTest_clicked"
QT_MOC_LITERAL(63, 1132, 28), // "on_bStartMaintenance_clicked"
QT_MOC_LITERAL(64, 1161, 10), // "mousePress"
QT_MOC_LITERAL(65, 1172, 10), // "mouseWheel"
QT_MOC_LITERAL(66, 1183, 15), // "setupComboBoxes"
QT_MOC_LITERAL(67, 1199, 20), // "on_ZoomInHor_clicked"
QT_MOC_LITERAL(68, 1220, 21), // "on_ZoomOutHor_clicked"
QT_MOC_LITERAL(69, 1242, 20), // "on_ZoomInVer_clicked"
QT_MOC_LITERAL(70, 1263, 21), // "on_ZoomOutVer_clicked"
QT_MOC_LITERAL(71, 1285, 26), // "on_bTemperatureSet_clicked"
QT_MOC_LITERAL(72, 1312, 31), // "on_bSetTemperatureStart_clicked"
QT_MOC_LITERAL(73, 1344, 30), // "on_bSetTemperatureStop_clicked"
QT_MOC_LITERAL(74, 1375, 37), // "on_cbTSelectSUnit_currentInde..."
QT_MOC_LITERAL(75, 1413, 21), // "on_ZoomCenter_clicked"
QT_MOC_LITERAL(76, 1435, 27), // "on_bSetExhaustValve_clicked"
QT_MOC_LITERAL(77, 1463, 21), // "saveValueExhaustValve"
QT_MOC_LITERAL(78, 1485, 5), // "value"
QT_MOC_LITERAL(79, 1491, 21), // "loadValueExhaustValve"
QT_MOC_LITERAL(80, 1513, 33), // "saveValueTopTempSensorCalibra..."
QT_MOC_LITERAL(81, 1547, 36), // "saveValueBottomTempSensorCali..."
QT_MOC_LITERAL(82, 1584, 35), // "saveValuePressureSensor1Calib..."
QT_MOC_LITERAL(83, 1620, 34), // "saveValueCleanTankLevelCalibr..."
QT_MOC_LITERAL(84, 1655, 34), // "saveValueDirtyTankLevelCalibr..."
QT_MOC_LITERAL(85, 1690, 38), // "saveValueExpansionTankLevelCa..."
QT_MOC_LITERAL(86, 1729, 33), // "loadValueTopTempSensorCalibra..."
QT_MOC_LITERAL(87, 1763, 36), // "loadValueBottomTempSensorCali..."
QT_MOC_LITERAL(88, 1800, 35), // "loadValuePressureSensor1Calib..."
QT_MOC_LITERAL(89, 1836, 34), // "loadValueCleanTankLevelCalibr..."
QT_MOC_LITERAL(90, 1871, 34), // "loadValueDirtyTankLevelCalibr..."
QT_MOC_LITERAL(91, 1906, 38), // "loadValueExpansionTankLevelCa..."
QT_MOC_LITERAL(92, 1945, 33), // "on_bSaveCalibrationValues_cli..."
QT_MOC_LITERAL(93, 1979, 21), // "on_bCabinDoor_clicked"
QT_MOC_LITERAL(94, 2001, 23), // "on_bEditProLook_clicked"
QT_MOC_LITERAL(95, 2025, 27), // "on_bClearLogTable_2_clicked"
QT_MOC_LITERAL(96, 2053, 21), // "run_keyboard_lineEdit"
QT_MOC_LITERAL(97, 2075, 22), // "on_bRecipeMode_clicked"
QT_MOC_LITERAL(98, 2098, 19), // "on_bFixMode_clicked"
QT_MOC_LITERAL(99, 2118, 21), // "on_b1500hMode_clicked"
QT_MOC_LITERAL(100, 2140, 25), // "on_btnBackDetails_clicked"
QT_MOC_LITERAL(101, 2166, 25), // "on_btnDetailsInfo_clicked"
QT_MOC_LITERAL(102, 2192, 30), // "on_btnDetailsTanklevel_clicked"
QT_MOC_LITERAL(103, 2223, 27), // "on_btnDetailsHeater_clicked"
QT_MOC_LITERAL(104, 2251, 29), // "on_btnDetailsPressure_clicked"
QT_MOC_LITERAL(105, 2281, 26), // "on_bStartTest1500h_clicked"
QT_MOC_LITERAL(106, 2308, 28), // "on_bSendProfile1500h_clicked"
QT_MOC_LITERAL(107, 2337, 24), // "on_checkBox_stateChanged"
QT_MOC_LITERAL(108, 2362, 21), // "on_checkBox_4_clicked"
QT_MOC_LITERAL(109, 2384, 21), // "on_checkBox_5_clicked"
QT_MOC_LITERAL(110, 2406, 21), // "on_checkBox_2_clicked"
QT_MOC_LITERAL(111, 2428, 21), // "on_checkBox_3_clicked"
QT_MOC_LITERAL(112, 2450, 22), // "on_bMinimize_2_clicked"
QT_MOC_LITERAL(113, 2473, 22), // "on_bMinimize_3_clicked"
QT_MOC_LITERAL(114, 2496, 25), // "on_bStopTest1500h_clicked"
QT_MOC_LITERAL(115, 2522, 26), // "on_bPauseTest1500h_clicked"
QT_MOC_LITERAL(116, 2549, 19), // "on_b_pipe_1_clicked"
QT_MOC_LITERAL(117, 2569, 19), // "on_b_pipe_2_clicked"
QT_MOC_LITERAL(118, 2589, 19), // "on_b_pipe_3_clicked"
QT_MOC_LITERAL(119, 2609, 19), // "on_b_pipe_4_clicked"
QT_MOC_LITERAL(120, 2629, 19), // "on_b_pipe_5_clicked"
QT_MOC_LITERAL(121, 2649, 31), // "on_b_basinc_tank_doldur_clicked"
QT_MOC_LITERAL(122, 2681, 30), // "on_b_temiz_tank_bosalt_clicked"
QT_MOC_LITERAL(123, 2712, 32), // "on_b_tum_tanklari_bosalt_clicked"
QT_MOC_LITERAL(124, 2745, 22), // "on_bResetFault_clicked"
QT_MOC_LITERAL(125, 2768, 17), // "resetFaultVisuals"
QT_MOC_LITERAL(126, 2786, 22), // "on_bChooseData_clicked"
QT_MOC_LITERAL(127, 2809, 26), // "on_btnDetailsPipes_clicked"
QT_MOC_LITERAL(128, 2836, 29), // "on_bDoorControlActive_clicked"
QT_MOC_LITERAL(129, 2866, 23), // "on_lineEdit_textChanged"
QT_MOC_LITERAL(130, 2890, 4), // "arg1"
QT_MOC_LITERAL(131, 2895, 21), // "activateCabinDoorLock"
QT_MOC_LITERAL(132, 2917, 31), // "on_bDoorCOntrolDeactive_clicked"
QT_MOC_LITERAL(133, 2949, 23), // "on_Hortum1_stateChanged"
QT_MOC_LITERAL(134, 2973, 23), // "on_Hortum2_stateChanged"
QT_MOC_LITERAL(135, 2997, 23), // "on_Hortum3_stateChanged"
QT_MOC_LITERAL(136, 3021, 23), // "on_Hortum4_stateChanged"
QT_MOC_LITERAL(137, 3045, 23), // "on_Hortum5_stateChanged"
QT_MOC_LITERAL(138, 3069, 36), // "on_bManualPressureLinesStart_..."
QT_MOC_LITERAL(139, 3106, 35), // "on_bManualPressureLinesStop_c..."
QT_MOC_LITERAL(140, 3142, 27), // "on_bManualEvacLines_clicked"
QT_MOC_LITERAL(141, 3170, 30), // "on_bManualPrepareLines_clicked"
QT_MOC_LITERAL(142, 3201, 42), // "on_cbChooseProfileType_curren..."
QT_MOC_LITERAL(143, 3244, 37), // "on_cbNSelectSUnit_currentInde..."
QT_MOC_LITERAL(144, 3282, 20), // "on_bNewNStep_clicked"
QT_MOC_LITERAL(145, 3303, 21), // "on_bNForward2_clicked"
QT_MOC_LITERAL(146, 3325, 21), // "on_bNSaveStep_clicked"
QT_MOC_LITERAL(147, 3347, 20), // "on_bTBack2_2_clicked"
QT_MOC_LITERAL(148, 3368, 18), // "on_bNBack3_clicked"
QT_MOC_LITERAL(149, 3387, 26), // "on_btnIsnHumidty_2_clicked"
QT_MOC_LITERAL(150, 3414, 24), // "on_btnIsnHumidty_clicked"
QT_MOC_LITERAL(151, 3439, 24), // "on_bMainDoorInfo_clicked"
QT_MOC_LITERAL(152, 3464, 14), // "degree_control"
QT_MOC_LITERAL(153, 3479, 15), // "humidty_control"
QT_MOC_LITERAL(154, 3495, 27), // "on_bSaveProfromTabl_clicked"
QT_MOC_LITERAL(155, 3523, 23), // "saveProfileInfoToStruct"
QT_MOC_LITERAL(156, 3547, 14), // "currentProfile"
QT_MOC_LITERAL(157, 3562, 25), // "saveProfileInfoQByteArray"
QT_MOC_LITERAL(158, 3588, 21), // "saveProfileInfoToFile"
QT_MOC_LITERAL(159, 3610, 7), // "profile"
QT_MOC_LITERAL(160, 3618, 42), // "on_cbChooseProfileSlot_curren..."
QT_MOC_LITERAL(161, 3661, 31), // "readProfileFromFileToQbyteArray"
QT_MOC_LITERAL(162, 3693, 19), // "readProfileToStruct"
QT_MOC_LITERAL(163, 3713, 8), // "rProfile"
QT_MOC_LITERAL(164, 3722, 18), // "readProfileToTable"
QT_MOC_LITERAL(165, 3741, 11), // "readProfile"
QT_MOC_LITERAL(166, 3753, 15), // "plotRecipeGraph"
QT_MOC_LITERAL(167, 3769, 28), // "on_bResetFaultBuzzer_clicked"
QT_MOC_LITERAL(168, 3798, 28), // "on_bClearProfromTabl_clicked"
QT_MOC_LITERAL(169, 3827, 21), // "on_bEditTablo_clicked"
QT_MOC_LITERAL(170, 3849, 11), // "labelEnable"
QT_MOC_LITERAL(171, 3861, 28), // "on_chbHumidityDevice_clicked"
QT_MOC_LITERAL(172, 3890, 45), // "on_cbChooseProfileTypeNew_cur..."
QT_MOC_LITERAL(173, 3936, 29), // "on_leFixTempValue_textChanged"
QT_MOC_LITERAL(174, 3966, 32), // "on_leFixHumidtyValue_textChanged"
QT_MOC_LITERAL(175, 3999, 36), // "on_leFixHumidtyValue_editingF..."
QT_MOC_LITERAL(176, 4036, 32), // "on_cbFixMode_currentIndexChanged"
QT_MOC_LITERAL(177, 4069, 23) // "changeLanguageToEnglish"

    },
    "MainWindow\0on_cbSelectGraph_currentIndexChanged\0"
    "\0index\0serialMessage\0command\0data\0"
    "on_cbSelectProfile_currentIndexChanged\0"
    "on_bEditPro_clicked\0on_bClearPro_clicked\0"
    "on_bSavePro_clicked\0updateTPreview\0"
    "updateNPreview\0on_bNewTStep_clicked\0"
    "on_bTForward2_clicked\0on_bTBack2_clicked\0"
    "on_bTBack3_clicked\0on_bTSaveStep_clicked\0"
    "readProfiles\0rType\0"
    "on_cbSelectProfileMain_currentIndexChanged\0"
    "sendProfileOverSerial\0mode\0"
    "on_bStartTest_clicked\0on_bStopTest_clicked\0"
    "askSensorValues\0askOtherStuff\0"
    "getCurrentDateTime\0prepareTestTimers\0"
    "updateInfo\0writeToLogTable\0info\0"
    "commInfo\0status\0updateTPlot\0updatePPlots\0"
    "profileSent\0setupTGraph\0setupPGraphs\0"
    "setupVGraph\0setupPreviewGraphs\0"
    "setupVisuals\0on_bScreenshot_clicked\0"
    "on_bScreenshot_saved\0on_bRes_clicked\0"
    "on_bFan_clicked\0on_bLightsMain_clicked\0"
    "closeEvent\0QCloseEvent*\0event\0"
    "on_bClearLogTable_clicked\0clearProfileSlot\0"
    "sType\0pType\0on_cbSelectMethodManual_currentIndexChanged\0"
    "on_cbSelectProfileManual_currentIndexChanged\0"
    "on_tabWidget_currentChanged\0"
    "on_bSendProfileMain_clicked\0"
    "on_bStartTestManual_clicked\0"
    "on_bStopTestManual_clicked\0"
    "on_bSendProfileManual_clicked\0"
    "on_bPauseTestManual_clicked\0"
    "on_bPauseTest_clicked\0"
    "on_bStartMaintenance_clicked\0mousePress\0"
    "mouseWheel\0setupComboBoxes\0"
    "on_ZoomInHor_clicked\0on_ZoomOutHor_clicked\0"
    "on_ZoomInVer_clicked\0on_ZoomOutVer_clicked\0"
    "on_bTemperatureSet_clicked\0"
    "on_bSetTemperatureStart_clicked\0"
    "on_bSetTemperatureStop_clicked\0"
    "on_cbTSelectSUnit_currentIndexChanged\0"
    "on_ZoomCenter_clicked\0on_bSetExhaustValve_clicked\0"
    "saveValueExhaustValve\0value\0"
    "loadValueExhaustValve\0"
    "saveValueTopTempSensorCalibration\0"
    "saveValueBottomTempSensorCalibration\0"
    "saveValuePressureSensor1Calibration\0"
    "saveValueCleanTankLevelCalibration\0"
    "saveValueDirtyTankLevelCalibration\0"
    "saveValueExpansionTankLevelCalibration\0"
    "loadValueTopTempSensorCalibration\0"
    "loadValueBottomTempSensorCalibration\0"
    "loadValuePressureSensor1Calibration\0"
    "loadValueCleanTankLevelCalibration\0"
    "loadValueDirtyTankLevelCalibration\0"
    "loadValueExpansionTankLevelCalibration\0"
    "on_bSaveCalibrationValues_clicked\0"
    "on_bCabinDoor_clicked\0on_bEditProLook_clicked\0"
    "on_bClearLogTable_2_clicked\0"
    "run_keyboard_lineEdit\0on_bRecipeMode_clicked\0"
    "on_bFixMode_clicked\0on_b1500hMode_clicked\0"
    "on_btnBackDetails_clicked\0"
    "on_btnDetailsInfo_clicked\0"
    "on_btnDetailsTanklevel_clicked\0"
    "on_btnDetailsHeater_clicked\0"
    "on_btnDetailsPressure_clicked\0"
    "on_bStartTest1500h_clicked\0"
    "on_bSendProfile1500h_clicked\0"
    "on_checkBox_stateChanged\0on_checkBox_4_clicked\0"
    "on_checkBox_5_clicked\0on_checkBox_2_clicked\0"
    "on_checkBox_3_clicked\0on_bMinimize_2_clicked\0"
    "on_bMinimize_3_clicked\0on_bStopTest1500h_clicked\0"
    "on_bPauseTest1500h_clicked\0"
    "on_b_pipe_1_clicked\0on_b_pipe_2_clicked\0"
    "on_b_pipe_3_clicked\0on_b_pipe_4_clicked\0"
    "on_b_pipe_5_clicked\0on_b_basinc_tank_doldur_clicked\0"
    "on_b_temiz_tank_bosalt_clicked\0"
    "on_b_tum_tanklari_bosalt_clicked\0"
    "on_bResetFault_clicked\0resetFaultVisuals\0"
    "on_bChooseData_clicked\0"
    "on_btnDetailsPipes_clicked\0"
    "on_bDoorControlActive_clicked\0"
    "on_lineEdit_textChanged\0arg1\0"
    "activateCabinDoorLock\0"
    "on_bDoorCOntrolDeactive_clicked\0"
    "on_Hortum1_stateChanged\0on_Hortum2_stateChanged\0"
    "on_Hortum3_stateChanged\0on_Hortum4_stateChanged\0"
    "on_Hortum5_stateChanged\0"
    "on_bManualPressureLinesStart_clicked\0"
    "on_bManualPressureLinesStop_clicked\0"
    "on_bManualEvacLines_clicked\0"
    "on_bManualPrepareLines_clicked\0"
    "on_cbChooseProfileType_currentIndexChanged\0"
    "on_cbNSelectSUnit_currentIndexChanged\0"
    "on_bNewNStep_clicked\0on_bNForward2_clicked\0"
    "on_bNSaveStep_clicked\0on_bTBack2_2_clicked\0"
    "on_bNBack3_clicked\0on_btnIsnHumidty_2_clicked\0"
    "on_btnIsnHumidty_clicked\0"
    "on_bMainDoorInfo_clicked\0degree_control\0"
    "humidty_control\0on_bSaveProfromTabl_clicked\0"
    "saveProfileInfoToStruct\0currentProfile\0"
    "saveProfileInfoQByteArray\0"
    "saveProfileInfoToFile\0profile\0"
    "on_cbChooseProfileSlot_currentIndexChanged\0"
    "readProfileFromFileToQbyteArray\0"
    "readProfileToStruct\0rProfile\0"
    "readProfileToTable\0readProfile\0"
    "plotRecipeGraph\0on_bResetFaultBuzzer_clicked\0"
    "on_bClearProfromTabl_clicked\0"
    "on_bEditTablo_clicked\0labelEnable\0"
    "on_chbHumidityDevice_clicked\0"
    "on_cbChooseProfileTypeNew_currentIndexChanged\0"
    "on_leFixTempValue_textChanged\0"
    "on_leFixHumidtyValue_textChanged\0"
    "on_leFixHumidtyValue_editingFinished\0"
    "on_cbFixMode_currentIndexChanged\0"
    "changeLanguageToEnglish"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
     160,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  814,    2, 0x08 /* Private */,
       4,    2,  817,    2, 0x08 /* Private */,
       7,    1,  822,    2, 0x08 /* Private */,
       8,    0,  825,    2, 0x08 /* Private */,
       9,    0,  826,    2, 0x08 /* Private */,
      10,    0,  827,    2, 0x08 /* Private */,
      11,    0,  828,    2, 0x08 /* Private */,
      12,    0,  829,    2, 0x08 /* Private */,
      13,    0,  830,    2, 0x08 /* Private */,
      14,    0,  831,    2, 0x08 /* Private */,
      15,    0,  832,    2, 0x08 /* Private */,
      16,    0,  833,    2, 0x08 /* Private */,
      17,    0,  834,    2, 0x08 /* Private */,
      18,    2,  835,    2, 0x08 /* Private */,
      20,    1,  840,    2, 0x08 /* Private */,
      21,    2,  843,    2, 0x08 /* Private */,
      23,    0,  848,    2, 0x08 /* Private */,
      24,    0,  849,    2, 0x08 /* Private */,
      25,    0,  850,    2, 0x08 /* Private */,
      26,    0,  851,    2, 0x08 /* Private */,
      27,    0,  852,    2, 0x08 /* Private */,
      28,    0,  853,    2, 0x08 /* Private */,
      29,    2,  854,    2, 0x08 /* Private */,
      30,    1,  859,    2, 0x08 /* Private */,
      32,    1,  862,    2, 0x08 /* Private */,
      34,    0,  865,    2, 0x08 /* Private */,
      35,    0,  866,    2, 0x08 /* Private */,
      36,    0,  867,    2, 0x08 /* Private */,
      37,    0,  868,    2, 0x08 /* Private */,
      38,    0,  869,    2, 0x08 /* Private */,
      39,    0,  870,    2, 0x08 /* Private */,
      40,    0,  871,    2, 0x08 /* Private */,
      41,    0,  872,    2, 0x08 /* Private */,
      42,    0,  873,    2, 0x08 /* Private */,
      43,    0,  874,    2, 0x08 /* Private */,
      44,    0,  875,    2, 0x08 /* Private */,
      45,    0,  876,    2, 0x08 /* Private */,
      46,    0,  877,    2, 0x08 /* Private */,
      47,    1,  878,    2, 0x08 /* Private */,
      50,    0,  881,    2, 0x08 /* Private */,
      51,    3,  882,    2, 0x08 /* Private */,
      54,    1,  889,    2, 0x08 /* Private */,
      55,    1,  892,    2, 0x08 /* Private */,
      56,    1,  895,    2, 0x08 /* Private */,
      57,    0,  898,    2, 0x08 /* Private */,
      58,    0,  899,    2, 0x08 /* Private */,
      59,    0,  900,    2, 0x08 /* Private */,
      60,    0,  901,    2, 0x08 /* Private */,
      61,    0,  902,    2, 0x08 /* Private */,
      62,    0,  903,    2, 0x08 /* Private */,
      63,    0,  904,    2, 0x08 /* Private */,
      64,    0,  905,    2, 0x08 /* Private */,
      65,    0,  906,    2, 0x08 /* Private */,
      66,    0,  907,    2, 0x08 /* Private */,
      67,    0,  908,    2, 0x08 /* Private */,
      68,    0,  909,    2, 0x08 /* Private */,
      69,    0,  910,    2, 0x08 /* Private */,
      70,    0,  911,    2, 0x08 /* Private */,
      71,    0,  912,    2, 0x08 /* Private */,
      72,    0,  913,    2, 0x08 /* Private */,
      73,    0,  914,    2, 0x08 /* Private */,
      74,    1,  915,    2, 0x08 /* Private */,
      75,    0,  918,    2, 0x08 /* Private */,
      76,    0,  919,    2, 0x08 /* Private */,
      77,    1,  920,    2, 0x08 /* Private */,
      79,    0,  923,    2, 0x08 /* Private */,
      80,    0,  924,    2, 0x08 /* Private */,
      81,    0,  925,    2, 0x08 /* Private */,
      82,    0,  926,    2, 0x08 /* Private */,
      83,    0,  927,    2, 0x08 /* Private */,
      84,    0,  928,    2, 0x08 /* Private */,
      85,    0,  929,    2, 0x08 /* Private */,
      86,    0,  930,    2, 0x08 /* Private */,
      87,    0,  931,    2, 0x08 /* Private */,
      88,    0,  932,    2, 0x08 /* Private */,
      89,    0,  933,    2, 0x08 /* Private */,
      90,    0,  934,    2, 0x08 /* Private */,
      91,    0,  935,    2, 0x08 /* Private */,
      92,    0,  936,    2, 0x08 /* Private */,
      93,    0,  937,    2, 0x08 /* Private */,
      94,    0,  938,    2, 0x08 /* Private */,
      95,    0,  939,    2, 0x08 /* Private */,
      96,    0,  940,    2, 0x08 /* Private */,
      97,    0,  941,    2, 0x08 /* Private */,
      98,    0,  942,    2, 0x08 /* Private */,
      99,    0,  943,    2, 0x08 /* Private */,
     100,    0,  944,    2, 0x08 /* Private */,
     101,    0,  945,    2, 0x08 /* Private */,
     102,    0,  946,    2, 0x08 /* Private */,
     103,    0,  947,    2, 0x08 /* Private */,
     104,    0,  948,    2, 0x08 /* Private */,
     105,    0,  949,    2, 0x08 /* Private */,
     106,    0,  950,    2, 0x08 /* Private */,
     107,    0,  951,    2, 0x08 /* Private */,
     108,    0,  952,    2, 0x08 /* Private */,
     109,    0,  953,    2, 0x08 /* Private */,
     110,    0,  954,    2, 0x08 /* Private */,
     111,    0,  955,    2, 0x08 /* Private */,
     112,    0,  956,    2, 0x08 /* Private */,
     113,    0,  957,    2, 0x08 /* Private */,
     114,    0,  958,    2, 0x08 /* Private */,
     115,    0,  959,    2, 0x08 /* Private */,
     116,    0,  960,    2, 0x08 /* Private */,
     117,    0,  961,    2, 0x08 /* Private */,
     118,    0,  962,    2, 0x08 /* Private */,
     119,    0,  963,    2, 0x08 /* Private */,
     120,    0,  964,    2, 0x08 /* Private */,
     121,    0,  965,    2, 0x08 /* Private */,
     122,    0,  966,    2, 0x08 /* Private */,
     123,    0,  967,    2, 0x08 /* Private */,
     124,    0,  968,    2, 0x08 /* Private */,
     125,    0,  969,    2, 0x08 /* Private */,
     126,    0,  970,    2, 0x08 /* Private */,
     127,    0,  971,    2, 0x08 /* Private */,
     128,    0,  972,    2, 0x08 /* Private */,
     129,    1,  973,    2, 0x08 /* Private */,
     131,    0,  976,    2, 0x08 /* Private */,
     132,    0,  977,    2, 0x08 /* Private */,
     133,    0,  978,    2, 0x08 /* Private */,
     134,    0,  979,    2, 0x08 /* Private */,
     135,    0,  980,    2, 0x08 /* Private */,
     136,    0,  981,    2, 0x08 /* Private */,
     137,    0,  982,    2, 0x08 /* Private */,
     138,    0,  983,    2, 0x08 /* Private */,
     139,    0,  984,    2, 0x08 /* Private */,
     140,    0,  985,    2, 0x08 /* Private */,
     141,    0,  986,    2, 0x08 /* Private */,
     142,    1,  987,    2, 0x08 /* Private */,
     143,    1,  990,    2, 0x08 /* Private */,
     144,    0,  993,    2, 0x08 /* Private */,
     145,    0,  994,    2, 0x08 /* Private */,
     146,    0,  995,    2, 0x08 /* Private */,
     147,    0,  996,    2, 0x08 /* Private */,
     148,    0,  997,    2, 0x08 /* Private */,
     149,    0,  998,    2, 0x08 /* Private */,
     150,    0,  999,    2, 0x08 /* Private */,
     151,    0, 1000,    2, 0x08 /* Private */,
     152,    0, 1001,    2, 0x08 /* Private */,
     153,    0, 1002,    2, 0x08 /* Private */,
     154,    0, 1003,    2, 0x08 /* Private */,
     155,    1, 1004,    2, 0x08 /* Private */,
     157,    1, 1007,    2, 0x08 /* Private */,
     158,    1, 1010,    2, 0x08 /* Private */,
     160,    1, 1013,    2, 0x08 /* Private */,
     161,    1, 1016,    2, 0x08 /* Private */,
     162,    2, 1019,    2, 0x08 /* Private */,
     164,    1, 1024,    2, 0x08 /* Private */,
     165,    1, 1027,    2, 0x08 /* Private */,
     166,    1, 1030,    2, 0x08 /* Private */,
     167,    0, 1033,    2, 0x08 /* Private */,
     168,    0, 1034,    2, 0x08 /* Private */,
     169,    0, 1035,    2, 0x08 /* Private */,
     170,    1, 1036,    2, 0x08 /* Private */,
     171,    0, 1039,    2, 0x08 /* Private */,
     172,    1, 1040,    2, 0x08 /* Private */,
     173,    1, 1043,    2, 0x08 /* Private */,
     174,    1, 1046,    2, 0x08 /* Private */,
     175,    0, 1049,    2, 0x08 /* Private */,
     176,    1, 1050,    2, 0x08 /* Private */,
     177,    0, 1053,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::QByteArray,    5,    6,
    QMetaType::Void, QMetaType::Int,    3,
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
    QMetaType::Bool, QMetaType::Char, QMetaType::Int,   19,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Bool, QMetaType::QString, QMetaType::Int,   22,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar, QMetaType::QByteArray,    3,    6,
    QMetaType::Void, QMetaType::QString,   31,
    QMetaType::Void, QMetaType::Bool,   33,
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
    QMetaType::Void, 0x80000000 | 48,   49,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Char, QMetaType::Char, QMetaType::UChar,   52,   53,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
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
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   78,
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
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
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
    QMetaType::Void, QMetaType::QString,  130,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
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
    QMetaType::Void, QMetaType::UChar,  156,
    QMetaType::QByteArray, QMetaType::UChar,  156,
    QMetaType::Void, QMetaType::QByteArray,  159,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::QByteArray, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::Int,  163,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Bool, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,  130,
    QMetaType::Void, QMetaType::QString,  130,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_cbSelectGraph_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->serialMessage((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 2: _t->on_cbSelectProfile_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_bEditPro_clicked(); break;
        case 4: _t->on_bClearPro_clicked(); break;
        case 5: _t->on_bSavePro_clicked(); break;
        case 6: _t->updateTPreview(); break;
        case 7: _t->updateNPreview(); break;
        case 8: _t->on_bNewTStep_clicked(); break;
        case 9: _t->on_bTForward2_clicked(); break;
        case 10: _t->on_bTBack2_clicked(); break;
        case 11: _t->on_bTBack3_clicked(); break;
        case 12: _t->on_bTSaveStep_clicked(); break;
        case 13: { bool _r = _t->readProfiles((*reinterpret_cast< char(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: _t->on_cbSelectProfileMain_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: { bool _r = _t->sendProfileOverSerial((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: _t->on_bStartTest_clicked(); break;
        case 17: _t->on_bStopTest_clicked(); break;
        case 18: _t->askSensorValues(); break;
        case 19: _t->askOtherStuff(); break;
        case 20: _t->getCurrentDateTime(); break;
        case 21: _t->prepareTestTimers(); break;
        case 22: _t->updateInfo((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 23: _t->writeToLogTable((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 24: _t->commInfo((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->updateTPlot(); break;
        case 26: _t->updatePPlots(); break;
        case 27: _t->profileSent(); break;
        case 28: _t->setupTGraph(); break;
        case 29: _t->setupPGraphs(); break;
        case 30: _t->setupVGraph(); break;
        case 31: _t->setupPreviewGraphs(); break;
        case 32: _t->setupVisuals(); break;
        case 33: _t->on_bScreenshot_clicked(); break;
        case 34: _t->on_bScreenshot_saved(); break;
        case 35: _t->on_bRes_clicked(); break;
        case 36: _t->on_bFan_clicked(); break;
        case 37: _t->on_bLightsMain_clicked(); break;
        case 38: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 39: _t->on_bClearLogTable_clicked(); break;
        case 40: _t->clearProfileSlot((*reinterpret_cast< char(*)>(_a[1])),(*reinterpret_cast< char(*)>(_a[2])),(*reinterpret_cast< quint8(*)>(_a[3]))); break;
        case 41: _t->on_cbSelectMethodManual_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 42: _t->on_cbSelectProfileManual_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 43: _t->on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 44: _t->on_bSendProfileMain_clicked(); break;
        case 45: _t->on_bStartTestManual_clicked(); break;
        case 46: _t->on_bStopTestManual_clicked(); break;
        case 47: _t->on_bSendProfileManual_clicked(); break;
        case 48: _t->on_bPauseTestManual_clicked(); break;
        case 49: _t->on_bPauseTest_clicked(); break;
        case 50: _t->on_bStartMaintenance_clicked(); break;
        case 51: _t->mousePress(); break;
        case 52: _t->mouseWheel(); break;
        case 53: _t->setupComboBoxes(); break;
        case 54: _t->on_ZoomInHor_clicked(); break;
        case 55: _t->on_ZoomOutHor_clicked(); break;
        case 56: _t->on_ZoomInVer_clicked(); break;
        case 57: _t->on_ZoomOutVer_clicked(); break;
        case 58: { bool _r = _t->on_bTemperatureSet_clicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 59: _t->on_bSetTemperatureStart_clicked(); break;
        case 60: _t->on_bSetTemperatureStop_clicked(); break;
        case 61: _t->on_cbTSelectSUnit_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 62: _t->on_ZoomCenter_clicked(); break;
        case 63: _t->on_bSetExhaustValve_clicked(); break;
        case 64: _t->saveValueExhaustValve((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 65: _t->loadValueExhaustValve(); break;
        case 66: _t->saveValueTopTempSensorCalibration(); break;
        case 67: _t->saveValueBottomTempSensorCalibration(); break;
        case 68: _t->saveValuePressureSensor1Calibration(); break;
        case 69: _t->saveValueCleanTankLevelCalibration(); break;
        case 70: _t->saveValueDirtyTankLevelCalibration(); break;
        case 71: _t->saveValueExpansionTankLevelCalibration(); break;
        case 72: _t->loadValueTopTempSensorCalibration(); break;
        case 73: _t->loadValueBottomTempSensorCalibration(); break;
        case 74: _t->loadValuePressureSensor1Calibration(); break;
        case 75: _t->loadValueCleanTankLevelCalibration(); break;
        case 76: _t->loadValueDirtyTankLevelCalibration(); break;
        case 77: _t->loadValueExpansionTankLevelCalibration(); break;
        case 78: _t->on_bSaveCalibrationValues_clicked(); break;
        case 79: _t->on_bCabinDoor_clicked(); break;
        case 80: _t->on_bEditProLook_clicked(); break;
        case 81: _t->on_bClearLogTable_2_clicked(); break;
        case 82: _t->run_keyboard_lineEdit(); break;
        case 83: _t->on_bRecipeMode_clicked(); break;
        case 84: _t->on_bFixMode_clicked(); break;
        case 85: _t->on_b1500hMode_clicked(); break;
        case 86: _t->on_btnBackDetails_clicked(); break;
        case 87: _t->on_btnDetailsInfo_clicked(); break;
        case 88: _t->on_btnDetailsTanklevel_clicked(); break;
        case 89: _t->on_btnDetailsHeater_clicked(); break;
        case 90: _t->on_btnDetailsPressure_clicked(); break;
        case 91: _t->on_bStartTest1500h_clicked(); break;
        case 92: { bool _r = _t->on_bSendProfile1500h_clicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 93: { bool _r = _t->on_checkBox_stateChanged();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 94: { bool _r = _t->on_checkBox_4_clicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 95: { bool _r = _t->on_checkBox_5_clicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 96: { bool _r = _t->on_checkBox_2_clicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 97: { bool _r = _t->on_checkBox_3_clicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 98: _t->on_bMinimize_2_clicked(); break;
        case 99: _t->on_bMinimize_3_clicked(); break;
        case 100: _t->on_bStopTest1500h_clicked(); break;
        case 101: _t->on_bPauseTest1500h_clicked(); break;
        case 102: _t->on_b_pipe_1_clicked(); break;
        case 103: _t->on_b_pipe_2_clicked(); break;
        case 104: _t->on_b_pipe_3_clicked(); break;
        case 105: _t->on_b_pipe_4_clicked(); break;
        case 106: _t->on_b_pipe_5_clicked(); break;
        case 107: _t->on_b_basinc_tank_doldur_clicked(); break;
        case 108: _t->on_b_temiz_tank_bosalt_clicked(); break;
        case 109: _t->on_b_tum_tanklari_bosalt_clicked(); break;
        case 110: _t->on_bResetFault_clicked(); break;
        case 111: _t->resetFaultVisuals(); break;
        case 112: _t->on_bChooseData_clicked(); break;
        case 113: _t->on_btnDetailsPipes_clicked(); break;
        case 114: _t->on_bDoorControlActive_clicked(); break;
        case 115: _t->on_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 116: _t->activateCabinDoorLock(); break;
        case 117: _t->on_bDoorCOntrolDeactive_clicked(); break;
        case 118: { bool _r = _t->on_Hortum1_stateChanged();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 119: { bool _r = _t->on_Hortum2_stateChanged();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 120: { bool _r = _t->on_Hortum3_stateChanged();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 121: { bool _r = _t->on_Hortum4_stateChanged();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 122: { bool _r = _t->on_Hortum5_stateChanged();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 123: _t->on_bManualPressureLinesStart_clicked(); break;
        case 124: _t->on_bManualPressureLinesStop_clicked(); break;
        case 125: _t->on_bManualEvacLines_clicked(); break;
        case 126: _t->on_bManualPrepareLines_clicked(); break;
        case 127: _t->on_cbChooseProfileType_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 128: _t->on_cbNSelectSUnit_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 129: _t->on_bNewNStep_clicked(); break;
        case 130: _t->on_bNForward2_clicked(); break;
        case 131: _t->on_bNSaveStep_clicked(); break;
        case 132: _t->on_bTBack2_2_clicked(); break;
        case 133: _t->on_bNBack3_clicked(); break;
        case 134: _t->on_btnIsnHumidty_2_clicked(); break;
        case 135: _t->on_btnIsnHumidty_clicked(); break;
        case 136: _t->on_bMainDoorInfo_clicked(); break;
        case 137: _t->degree_control(); break;
        case 138: _t->humidty_control(); break;
        case 139: _t->on_bSaveProfromTabl_clicked(); break;
        case 140: _t->saveProfileInfoToStruct((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 141: { QByteArray _r = _t->saveProfileInfoQByteArray((*reinterpret_cast< quint8(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 142: _t->saveProfileInfoToFile((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 143: _t->on_cbChooseProfileSlot_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 144: { QByteArray _r = _t->readProfileFromFileToQbyteArray((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 145: _t->readProfileToStruct((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 146: _t->readProfileToTable((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 147: { bool _r = _t->readProfile((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 148: _t->plotRecipeGraph((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 149: _t->on_bResetFaultBuzzer_clicked(); break;
        case 150: _t->on_bClearProfromTabl_clicked(); break;
        case 151: _t->on_bEditTablo_clicked(); break;
        case 152: _t->labelEnable((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 153: _t->on_chbHumidityDevice_clicked(); break;
        case 154: _t->on_cbChooseProfileTypeNew_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 155: _t->on_leFixTempValue_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 156: _t->on_leFixHumidtyValue_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 157: _t->on_leFixHumidtyValue_editingFinished(); break;
        case 158: _t->on_cbFixMode_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 159: _t->changeLanguageToEnglish(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 160)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 160;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 160)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 160;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
