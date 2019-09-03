#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QCoreApplication>
#include <QTextStream>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QString tile_num = QString::fromUtf8("empty");

private slots:
    void on_tile_0_clicked();

    void on_map_001_clicked();

    void on_tile_1_clicked();

    void on_map_002_clicked();

    void on_tile_2_clicked();

    void on_tile_3_clicked();

    void on_tile_4_clicked();

    void on_tile_5_clicked();

    void on_tile_6_clicked();

    void on_tile_7_clicked();

    void on_tile_8_clicked();

    void on_tile_9_clicked();

    void on_tile_10_clicked();

    void on_tile_11_clicked();

    void on_tile_12_clicked();

    void on_tile_13_clicked();

    void on_tile_14_clicked();

    void on_tile_15_clicked();

    void on_tile_16_clicked();

    void on_tile_17_clicked();

    void on_tile_18_clicked();

    void on_tile_19_clicked();

    void on_tile_20_clicked();

    void on_tile_21_clicked();

    void on_tile_22_clicked();

    void on_tile_23_clicked();

    void on_tile_24_clicked();

    void on_tile_25_clicked();

    void on_tile_26_clicked();

    void on_tile_27_clicked();

    void on_tile_28_clicked();

    void on_tile_29_clicked();

    void on_map_003_clicked();

    void on_map_004_clicked();

    void on_map_005_clicked();

    void on_map_006_clicked();

    void on_map_007_clicked();

    void on_map_008_clicked();

    void on_map_009_clicked();

    void on_map_010_clicked();

    void on_map_011_clicked();

    void on_map_012_clicked();

    void on_map_013_clicked();

    void on_map_014_clicked();

    void on_map_015_clicked();

    void on_map_016_clicked();

    void on_map_017_clicked();

    void on_map_018_clicked();

    void on_map_019_clicked();

    void on_map_020_clicked();

    void on_map_021_clicked();

    void on_map_022_clicked();

    void on_map_023_clicked();

    void on_map_024_clicked();

    void on_map_025_clicked();

    void on_map_026_clicked();

    void on_map_027_clicked();

    void on_map_028_clicked();

    void on_map_029_clicked();

    void on_map_030_clicked();

    void on_map_031_clicked();

    void on_map_032_clicked();

    void on_map_033_clicked();

    void on_map_034_clicked();

    void on_map_035_clicked();

    void on_map_036_clicked();

    void on_map_037_clicked();

    void on_map_038_clicked();

    void on_map_039_clicked();

    void on_map_040_clicked();

    void on_map_041_clicked();

    void on_map_042_clicked();

    void on_map_043_clicked();

    void on_map_044_clicked();

    void on_map_045_clicked();

    void on_map_046_clicked();

    void on_map_047_clicked();

    void on_map_048_clicked();

    void on_map_049_clicked();

    void on_map_050_clicked();

    void on_map_051_clicked();

    void on_map_052_clicked();

    void on_map_053_clicked();

    void on_map_054_clicked();

    void on_map_055_clicked();

    void on_map_056_clicked();

    void on_map_057_clicked();

    void on_map_058_clicked();

    void on_map_059_clicked();

    void on_map_060_clicked();

    void on_map_061_clicked();

    void on_map_062_clicked();

    void on_map_063_clicked();

    void on_map_064_clicked();

    void on_map_065_clicked();

    void on_map_066_clicked();

    void on_map_067_clicked();

    void on_map_068_clicked();

    void on_map_069_clicked();

    void on_map_070_clicked();

    void on_map_071_clicked();

    void on_map_072_clicked();

    void on_map_073_clicked();

    void on_map_074_clicked();

    void on_map_075_clicked();

    void on_map_076_clicked();

    void on_map_077_clicked();

    void on_map_078_clicked();

    void on_map_079_clicked();

    void on_map_080_clicked();

    void on_map_081_clicked();

    void on_map_082_clicked();

    void on_map_083_clicked();

    void on_map_084_clicked();

    void on_map_085_clicked();

    void on_map_086_clicked();

    void on_map_087_clicked();

    void on_map_088_clicked();

    void on_map_089_clicked();

    void on_map_090_clicked();

    void on_map_091_clicked();

    void on_map_092_clicked();

    void on_map_093_clicked();

    void on_map_094_clicked();

    void on_map_095_clicked();

    void on_map_096_clicked();

    void on_map_097_clicked();

    void on_map_098_clicked();

    void on_map_099_clicked();

    void on_map_100_clicked();

    void on_map_101_clicked();

    void on_map_102_clicked();

    void on_map_103_clicked();

    void on_map_104_clicked();

    void on_map_105_clicked();

    void on_map_106_clicked();

    void on_map_107_clicked();

    void on_map_108_clicked();

    void on_map_109_clicked();

    void on_map_110_clicked();

    void on_map_111_clicked();

    void on_map_112_clicked();

    void on_map_113_clicked();

    void on_map_114_clicked();

    void on_map_115_clicked();

    void on_map_116_clicked();

    void on_map_117_clicked();

    void on_map_118_clicked();

    void on_map_119_clicked();

    void on_map_120_clicked();

    void on_map_121_clicked();

    void on_map_122_clicked();

    void on_map_123_clicked();

    void on_map_124_clicked();

    void on_map_125_clicked();

    void on_map_126_clicked();

    void on_map_127_clicked();

    void on_map_128_clicked();

    void on_map_129_clicked();

    void on_map_130_clicked();

    void on_map_131_clicked();

    void on_map_132_clicked();

    void on_map_133_clicked();

    void on_map_134_clicked();

    void on_map_135_clicked();

    void on_map_136_clicked();

    void on_map_137_clicked();

    void on_map_138_clicked();

    void on_map_139_clicked();

    void on_map_140_clicked();

    void on_map_141_clicked();

    void on_map_142_clicked();

    void on_map_143_clicked();

    void on_map_144_clicked();

    void on_map_145_clicked();

    void on_map_146_clicked();

    void on_map_147_clicked();

    void on_map_148_clicked();

    void on_map_149_clicked();

    void on_map_150_clicked();

    void on_map_151_clicked();

    void on_map_152_clicked();

    void on_map_153_clicked();

    void on_map_154_clicked();

    void on_map_155_clicked();

    void on_map_156_clicked();

    void on_map_157_clicked();

    void on_map_158_clicked();

    void on_map_159_clicked();

    void on_map_160_clicked();

    void on_map_161_clicked();

    void on_map_162_clicked();

    void on_map_163_clicked();

    void on_map_164_clicked();

    void on_map_165_clicked();

    void on_map_166_clicked();

    void on_map_167_clicked();

    void on_map_168_clicked();

    void on_map_169_clicked();

    void on_map_170_clicked();

    void on_map_171_clicked();

    void on_map_172_clicked();

    void on_map_173_clicked();

    void on_map_174_clicked();

    void on_map_175_clicked();

    void on_map_176_clicked();

    void on_map_177_clicked();

    void on_map_178_clicked();

    void on_map_179_clicked();

    void on_map_180_clicked();

    void on_map_181_clicked();

    void on_map_182_clicked();

    void on_map_183_clicked();

    void on_map_184_clicked();

    void on_map_185_clicked();

    void on_map_186_clicked();

    void on_map_187_clicked();

    void on_map_188_clicked();

    void on_map_189_clicked();

    void on_map_190_clicked();

    void on_map_191_clicked();

    void on_map_192_clicked();

    void on_map_193_clicked();

    void on_map_194_clicked();

    void on_map_195_clicked();

    void on_map_196_clicked();

    void on_map_197_clicked();

    void on_map_198_clicked();

    void on_map_199_clicked();

    void on_map_200_clicked();

    void on_map_201_clicked();

    void on_map_202_clicked();

    void on_map_203_clicked();

    void on_map_204_clicked();

    void on_map_205_clicked();

    void on_map_206_clicked();

    void on_map_207_clicked();

    void on_map_208_clicked();

    void on_map_209_clicked();

    void on_map_210_clicked();

    void on_map_211_clicked();

    void on_map_212_clicked();

    void on_map_213_clicked();

    void on_map_214_clicked();

    void on_map_215_clicked();

    void on_map_216_clicked();

    void on_map_217_clicked();

    void on_map_218_clicked();

    void on_map_219_clicked();

    void on_map_220_clicked();

    void on_map_221_clicked();

    void on_map_222_clicked();

    void on_map_223_clicked();

    void on_map_224_clicked();

    void on_map_225_clicked();

    void on_map_226_clicked();

    void on_map_227_clicked();

    void on_map_228_clicked();

    void on_map_229_clicked();

    void on_map_230_clicked();

    void on_map_231_clicked();

    void on_map_232_clicked();

    void on_map_233_clicked();

    void on_map_234_clicked();

    void on_map_235_clicked();

    void on_map_236_clicked();

    void on_map_237_clicked();

    void on_map_238_clicked();

    void on_map_239_clicked();

    void on_map_240_clicked();

    void on_map_241_clicked();

    void on_map_242_clicked();

    void on_map_243_clicked();

    void on_map_244_clicked();

    void on_map_245_clicked();

    void on_map_246_clicked();

    void on_map_247_clicked();

    void on_map_248_clicked();

    void on_map_249_clicked();

    void on_map_250_clicked();

    void on_map_251_clicked();

    void on_map_252_clicked();

    void on_map_253_clicked();

    void on_map_254_clicked();

    void on_map_255_clicked();

    void on_map_256_clicked();

    void on_map_257_clicked();

    void on_map_258_clicked();

    void on_map_259_clicked();

    void on_map_260_clicked();

    void on_map_261_clicked();

    void on_map_262_clicked();

    void on_map_263_clicked();

    void on_map_264_clicked();

    void on_map_265_clicked();

    void on_map_266_clicked();

    void on_map_267_clicked();

    void on_map_268_clicked();

    void on_map_269_clicked();

    void on_map_270_clicked();

    void on_map_271_clicked();

    void on_map_272_clicked();

    void on_map_273_clicked();

    void on_map_274_clicked();

    void on_map_275_clicked();

    void on_map_276_clicked();

    void on_map_277_clicked();

    void on_map_278_clicked();

    void on_map_279_clicked();

    void on_map_280_clicked();

    void on_map_281_clicked();

    void on_map_282_clicked();

    void on_map_283_clicked();

    void on_map_284_clicked();

    void on_map_285_clicked();

    void on_map_286_clicked();

    void on_map_287_clicked();

    void on_map_288_clicked();

    void on_map_289_clicked();

    void on_map_290_clicked();

    void on_map_291_clicked();

    void on_map_292_clicked();

    void on_map_293_clicked();

    void on_map_294_clicked();

    void on_map_295_clicked();

    void on_map_296_clicked();

    void on_map_297_clicked();

    void on_map_298_clicked();

    void on_map_299_clicked();

    void on_map_300_clicked();

    void on_map_301_clicked();

    void on_map_302_clicked();

    void on_map_303_clicked();

    void on_map_304_clicked();

    void on_map_305_clicked();

    void on_map_306_clicked();

    void on_map_307_clicked();

    void on_map_308_clicked();

    void on_map_309_clicked();

    void on_map_310_clicked();

    void on_map_311_clicked();

    void on_map_312_clicked();

    void on_map_313_clicked();

    void on_map_314_clicked();

    void on_map_315_clicked();

    void on_map_316_clicked();

    void on_map_317_clicked();

    void on_map_318_clicked();

    void on_map_319_clicked();

    void on_map_320_clicked();

    void on_map_321_clicked();

    void on_map_322_clicked();

    void on_map_323_clicked();

    void on_map_324_clicked();

    void on_map_325_clicked();

    void on_map_326_clicked();

    void on_map_327_clicked();

    void on_map_328_clicked();

    void on_map_329_clicked();

    void on_map_330_clicked();

    void on_map_331_clicked();

    void on_map_332_clicked();

    void on_map_333_clicked();

    void on_map_334_clicked();

    void on_map_335_clicked();

    void on_map_336_clicked();

    void on_map_337_clicked();

    void on_map_338_clicked();

    void on_map_339_clicked();

    void on_map_340_clicked();

    void on_map_341_clicked();

    void on_map_342_clicked();

    void on_map_343_clicked();

    void on_map_344_clicked();

    void on_map_345_clicked();

    void on_map_346_clicked();

    void on_map_347_clicked();

    void on_map_348_clicked();

    void on_map_349_clicked();

    void on_map_350_clicked();

    void on_map_351_clicked();

    void on_map_352_clicked();

    void on_map_353_clicked();

    void on_map_354_clicked();

    void on_map_355_clicked();

    void on_map_356_clicked();

    void on_map_357_clicked();

    void on_map_358_clicked();

    void on_map_359_clicked();

    void on_map_360_clicked();

    void on_map_361_clicked();

    void on_map_362_clicked();

    void on_map_363_clicked();

    void on_map_364_clicked();

    void on_map_365_clicked();

    void on_map_366_clicked();

    void on_map_367_clicked();

    void on_map_368_clicked();

    void on_map_369_clicked();

    void on_map_370_clicked();

    void on_map_371_clicked();

    void on_map_372_clicked();

    void on_map_373_clicked();

    void on_map_374_clicked();

    void on_map_375_clicked();

    void on_map_376_clicked();

    void on_map_377_clicked();

    void on_map_378_clicked();

    void on_map_379_clicked();

    void on_map_380_clicked();

    void on_map_381_clicked();

    void on_map_382_clicked();

    void on_map_383_clicked();

    void on_map_384_clicked();

    void on_map_385_clicked();

    void on_map_386_clicked();

    void on_map_387_clicked();

    void on_map_388_clicked();

    void on_map_389_clicked();

    void on_map_390_clicked();

    void on_map_391_clicked();

    void on_map_392_clicked();

    void on_map_393_clicked();

    void on_map_394_clicked();

    void on_map_395_clicked();

    void on_map_396_clicked();

    void on_map_397_clicked();

    void on_map_398_clicked();

    void on_map_399_clicked();

    void on_map_400_clicked();

    void on_map_401_clicked();

    void on_map_402_clicked();

    void on_map_403_clicked();

    void on_map_404_clicked();

    void on_map_405_clicked();

    void on_map_406_clicked();

    void on_map_407_clicked();

    void on_map_408_clicked();

    void on_map_409_clicked();

    void on_map_410_clicked();

    void on_map_411_clicked();

    void on_map_412_clicked();

    void on_map_413_clicked();

    void on_map_414_clicked();

    void on_map_415_clicked();

    void on_map_416_clicked();

    void on_map_417_clicked();

    void on_map_418_clicked();

    void on_map_419_clicked();

    void on_map_420_clicked();

    void on_map_421_clicked();

    void on_map_422_clicked();

    void on_map_423_clicked();

    void on_map_424_clicked();

    void on_map_425_clicked();

    void on_map_426_clicked();

    void on_map_427_clicked();

    void on_map_428_clicked();

    void on_map_429_clicked();

    void on_map_430_clicked();

    void on_map_431_clicked();

    void on_map_432_clicked();

    void on_map_433_clicked();

    void on_map_434_clicked();

    void on_map_435_clicked();

    void on_map_436_clicked();

    void on_map_437_clicked();

    void on_map_438_clicked();

    void on_map_439_clicked();

    void on_map_440_clicked();

    void on_map_441_clicked();

    void on_map_442_clicked();

    void on_map_443_clicked();

    void on_map_444_clicked();

    void on_map_445_clicked();

    void on_map_446_clicked();

    void on_map_447_clicked();

    void on_map_448_clicked();

    void on_map_449_clicked();

    void on_map_450_clicked();

    void on_map_451_clicked();

    void on_map_452_clicked();

    void on_map_453_clicked();

    void on_map_454_clicked();

    void on_map_455_clicked();

    void on_map_456_clicked();

    void on_map_457_clicked();

    void on_map_458_clicked();

    void on_map_459_clicked();

    void on_map_460_clicked();

    void on_map_461_clicked();

    void on_map_462_clicked();

    void on_map_463_clicked();

    void on_map_464_clicked();

    void on_map_465_clicked();

    void on_map_466_clicked();

    void on_map_467_clicked();

    void on_map_468_clicked();

    void on_map_469_clicked();

    void on_map_470_clicked();

    void on_map_471_clicked();

    void on_map_472_clicked();

    void on_map_473_clicked();

    void on_map_474_clicked();

    void on_map_475_clicked();

    void on_map_476_clicked();

    void on_map_477_clicked();

    void on_map_478_clicked();

    void on_map_479_clicked();

    void on_map_480_clicked();

    void on_map_481_clicked();

    void on_map_482_clicked();

    void on_map_483_clicked();

    void on_map_484_clicked();

    void on_map_485_clicked();

    void on_map_486_clicked();

    void on_map_487_clicked();

    void on_map_488_clicked();

    void on_map_489_clicked();

    void on_map_490_clicked();

    void on_map_491_clicked();

    void on_map_492_clicked();

    void on_map_493_clicked();

    void on_map_494_clicked();

    void on_map_495_clicked();

    void on_map_496_clicked();

    void on_map_497_clicked();

    void on_map_498_clicked();

    void on_map_499_clicked();

    void on_map_500_clicked();

    void on_map_501_clicked();

    void on_map_502_clicked();

    void on_map_503_clicked();

    void on_map_504_clicked();

    void on_map_505_clicked();

    void on_map_506_clicked();

    void on_map_507_clicked();

    void on_map_508_clicked();

    void on_map_509_clicked();

    void on_map_510_clicked();

    void on_map_511_clicked();

    void on_map_512_clicked();

    void on_map_513_clicked();

    void on_map_514_clicked();

    void on_map_515_clicked();

    void on_map_516_clicked();

    void on_map_517_clicked();

    void on_map_518_clicked();

    void on_map_519_clicked();

    void on_map_520_clicked();

    void on_map_521_clicked();

    void on_map_522_clicked();

    void on_map_523_clicked();

    void on_map_524_clicked();

    void on_map_525_clicked();

    void on_map_526_clicked();

    void on_map_527_clicked();

    void on_map_528_clicked();

    void on_map_529_clicked();

    void on_map_530_clicked();

    void on_map_531_clicked();

    void on_map_532_clicked();

    void on_map_533_clicked();

    void on_map_534_clicked();

    void on_map_535_clicked();

    void on_map_536_clicked();

    void on_map_537_clicked();

    void on_map_538_clicked();

    void on_map_539_clicked();

    void on_map_540_clicked();

    void on_map_541_clicked();

    void on_map_542_clicked();

    void on_map_543_clicked();

    void on_map_544_clicked();

    void on_map_545_clicked();

    void on_map_546_clicked();

    void on_map_547_clicked();

    void on_map_548_clicked();

    void on_map_549_clicked();

    void on_map_550_clicked();

    void on_map_551_clicked();

    void on_map_552_clicked();

    void on_map_553_clicked();

    void on_map_554_clicked();

    void on_map_555_clicked();

    void on_map_556_clicked();

    void on_map_557_clicked();

    void on_map_558_clicked();

    void on_map_559_clicked();

    void on_map_560_clicked();

    void on_map_561_clicked();

    void on_map_562_clicked();

    void on_map_563_clicked();

    void on_map_564_clicked();

    void on_map_565_clicked();

    void on_map_566_clicked();

    void on_map_567_clicked();

    void on_map_568_clicked();

    void on_map_569_clicked();

    void on_map_570_clicked();

    void on_map_571_clicked();

    void on_map_572_clicked();

    void on_map_573_clicked();

    void on_map_574_clicked();

    void on_map_575_clicked();

    void on_map_576_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
