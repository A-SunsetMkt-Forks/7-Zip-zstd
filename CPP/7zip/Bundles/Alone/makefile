PROG = 7za.exe

CFLAGS = $(CFLAGS) -DZ7_ZIP_LZFSE_DISABLE
# -DZ7_PROG_VARIANT_A
# CONSOLE_VARIANT_FLAGS=-DZ7_PROG_VARIANT_A
# ZIP_FLAGS=-DZ7_ZIP_LZFSE_DISABLE

# USE_C_AES = 1
# USE_C_SHA = 1
# USE_C_LZFINDOPT = 1

MY_CONSOLE = 1
CFLAGS = $(CFLAGS) -DZSTD_MULTITHREAD

!IFNDEF UNDER_CE
CFLAGS = $(CFLAGS) -DWIN_LONG_PATH -D_7ZIP_LARGE_PAGES -DSUPPORT_DEVICE_FILE
!ENDIF

COMMON_OBJS = \
  $O\CommandLineParser.obj \
  $O\CRC.obj \
  $O\CrcReg.obj \
  $O\DynLimBuf.obj \
  $O\IntToString.obj \
  $O\ListFileUtils.obj \
  $O\LzFindPrepare.obj \
  $O\NewHandler.obj \
  $O\StdInStream.obj \
  $O\StdOutStream.obj \
  $O\MyString.obj \
  $O\StringConvert.obj \
  $O\StringToInt.obj \
  $O\UTFConvert.obj \
  $O\MyVector.obj \
  $O\Wildcard.obj \
  $O\Sha1Reg.obj \
  $O\Sha256Reg.obj \
  $O\Xxh64Reg.obj \
  $O\XzCrc64Init.obj \
  $O\XzCrc64Reg.obj \

WIN_OBJS = \
  $O\DLL.obj \
  $O\ErrorMsg.obj \
  $O\FileDir.obj \
  $O\FileFind.obj \
  $O\FileIO.obj \
  $O\FileLink.obj \
  $O\FileName.obj \
  $O\FileSystem.obj \
  $O\MemoryLock.obj \
  $O\PropVariant.obj \
  $O\PropVariantConv.obj \
  $O\PropVariantUtils.obj \
  $O\Registry.obj \
  $O\Synchronization.obj \
  $O\System.obj \
  $O\SystemInfo.obj \
  $O\TimeUtils.obj \

7ZIP_COMMON_OBJS = \
  $O\CreateCoder.obj \
  $O\CWrappers.obj \
  $O\FilePathAutoRename.obj \
  $O\FileStreams.obj \
  $O\FilterCoder.obj \
  $O\InBuffer.obj \
  $O\InOutTempBuffer.obj \
  $O\LimitedStreams.obj \
  $O\MemBlocks.obj \
  $O\MethodId.obj \
  $O\MethodProps.obj \
  $O\MultiOutStream.obj \
  $O\OffsetStream.obj \
  $O\OutBuffer.obj \
  $O\OutMemStream.obj \
  $O\ProgressMt.obj \
  $O\ProgressUtils.obj \
  $O\PropId.obj \
  $O\StreamBinder.obj \
  $O\StreamObjects.obj \
  $O\StreamUtils.obj \
  $O\UniqBlocks.obj \
  $O\VirtThread.obj \

AR_OBJS = \
  $O\Bz2Handler.obj \
  $O\DeflateProps.obj \
  $O\GzHandler.obj \
  $O\LzHandler.obj \
  $O\LzmaHandler.obj \
  $O\SplitHandler.obj \
  $O\XzHandler.obj \
  $O\ZstdHandler.obj \

AR_COMMON_OBJS = \
  $O\CoderMixer2.obj \
  $O\DummyOutStream.obj \
  $O\FindSignature.obj \
  $O\HandlerOut.obj \
  $O\InStreamWithCRC.obj \
  $O\ItemNameUtils.obj \
  $O\MultiStream.obj \
  $O\OutStreamWithCRC.obj \
  $O\ParseProperties.obj \


7Z_OBJS = \
  $O\7zCompressionMode.obj \
  $O\7zDecode.obj \
  $O\7zEncode.obj \
  $O\7zExtract.obj \
  $O\7zFolderInStream.obj \
  $O\7zHandler.obj \
  $O\7zHandlerOut.obj \
  $O\7zHeader.obj \
  $O\7zIn.obj \
  $O\7zOut.obj \
  $O\7zProperties.obj \
  $O\7zSpecStream.obj \
  $O\7zUpdate.obj \
  $O\7zRegister.obj \

CAB_OBJS = \
  $O\CabBlockInStream.obj \
  $O\CabHandler.obj \
  $O\CabHeader.obj \
  $O\CabIn.obj \
  $O\CabRegister.obj \

TAR_OBJS = \
  $O\TarHandler.obj \
  $O\TarHandlerOut.obj \
  $O\TarHeader.obj \
  $O\TarIn.obj \
  $O\TarOut.obj \
  $O\TarUpdate.obj \
  $O\TarRegister.obj \

ZIP_OBJS = \
  $O\ZipAddCommon.obj \
  $O\ZipHandler.obj \
  $O\ZipHandlerOut.obj \
  $O\ZipIn.obj \
  $O\ZipItem.obj \
  $O\ZipOut.obj \
  $O\ZipUpdate.obj \
  $O\ZipRegister.obj \


COMPRESS_OBJS = \
  $O\Bcj2Coder.obj \
  $O\Bcj2Register.obj \
  $O\BcjCoder.obj \
  $O\BcjRegister.obj \
  $O\BitlDecoder.obj \
  $O\BranchMisc.obj \
  $O\BranchRegister.obj \
  $O\ByteSwap.obj \
  $O\BZip2Crc.obj \
  $O\BZip2Decoder.obj \
  $O\BZip2Encoder.obj \
  $O\BZip2Register.obj \
  $O\CopyCoder.obj \
  $O\CopyRegister.obj \
  $O\Deflate64Register.obj \
  $O\DeflateDecoder.obj \
  $O\DeflateEncoder.obj \
  $O\DeflateRegister.obj \
  $O\DeltaFilter.obj \
  $O\ImplodeDecoder.obj \
  $O\Lzma2Decoder.obj \
  $O\Lzma2Encoder.obj \
  $O\Lzma2Register.obj \
  $O\LzmaDecoder.obj \
  $O\LzmaEncoder.obj \
  $O\LzmaRegister.obj \
  $O\LzOutWindow.obj \
  $O\LzxDecoder.obj \
  $O\PpmdDecoder.obj \
  $O\PpmdEncoder.obj \
  $O\PpmdRegister.obj \
  $O\PpmdZip.obj \
  $O\QuantumDecoder.obj \
  $O\ShrinkDecoder.obj \
  $O\XzDecoder.obj \
  $O\XzEncoder.obj \
  $O\ZstdDecoder.obj \

#  $O\LzfseDecoder.obj \
#  $O\ZstdRegister.obj \

CRYPTO_OBJS = \
  $O\7zAes.obj \
  $O\7zAesRegister.obj \
  $O\HmacSha1.obj \
  $O\MyAes.obj \
  $O\MyAesReg.obj \
  $O\Pbkdf2HmacSha1.obj \
  $O\RandGen.obj \
  $O\WzAes.obj \
  $O\ZipCrypto.obj \
  $O\ZipStrong.obj \

C_OBJS = \
  $O\7zStream.obj \
  $O\Alloc.obj \
  $O\Bcj2.obj \
  $O\Bcj2Enc.obj \
  $O\Bra.obj \
  $O\Bra86.obj \
  $O\BraIA64.obj \
  $O\BwtSort.obj \
  $O\CpuArch.obj \
  $O\Delta.obj \
  $O\HuffEnc.obj \
  $O\LzFind.obj \
  $O\LzFindMt.obj \
  $O\Lzma2Dec.obj \
  $O\Lzma2DecMt.obj \
  $O\Lzma2Enc.obj \
  $O\LzmaDec.obj \
  $O\LzmaEnc.obj \
  $O\MtCoder.obj \
  $O\MtDec.obj \
  $O\Ppmd7.obj \
  $O\Ppmd7Dec.obj \
  $O\Ppmd7Enc.obj \
  $O\Ppmd8.obj \
  $O\Ppmd8Dec.obj \
  $O\Ppmd8Enc.obj \
  $O\Sort.obj \
  $O\SwapBytes.obj \
  $O\Threads.obj \
  $O\Xxh64.obj \
  $O\Xz.obj \
  $O\XzDec.obj \
  $O\XzEnc.obj \
  $O\XzIn.obj \

COMPRESS_OBJS = $(COMPRESS_OBJS) \
  $O\BrotliDecoder.obj \
  $O\BrotliEncoder.obj \
  $O\BrotliRegister.obj \
  $O\Lz4Decoder.obj \
  $O\Lz4Encoder.obj \
  $O\Lz4Register.obj \
  $O\LizardDecoder.obj \
  $O\LizardEncoder.obj \
  $O\LizardRegister.obj \
  $O\liz_entropy_common.obj \
  $O\liz_fse_compress.obj \
  $O\liz_fse_decompress.obj \
  $O\liz_huf_compress.obj \
  $O\liz_huf_decompress.obj \
  $O\liz_xxhash.obj \
  $O\Lz5Decoder.obj \
  $O\Lz5Encoder.obj \
  $O\Lz5Register.obj \
  $O\ZstdEncoder.obj \
  $O\ZstdRegister.obj \
  $O\FastLzma2Register.obj \

BROTLI_OBJS = \
  $O/br_backward_references.obj \
  $O/br_backward_references_hq.obj \
  $O/br_bit_cost.obj \
  $O/br_bit_reader.obj \
  $O/br_block_splitter.obj \
  $O/br_brotli_bit_stream.obj \
  $O/br_cluster.obj \
  $O/br_command.obj \
  $O/br_compound_dictionary.obj \
  $O/br_compress_fragment.obj \
  $O/br_compress_fragment_two_pass.obj \
  $O/br_constants.obj \
  $O/br_context.obj \
  $O/br_decode.obj \
  $O/br_dictionary.obj \
  $O/br_dictionary_hash.obj \
  $O/br_encode.obj \
  $O/br_encoder_dict.obj \
  $O/br_entropy_encode.obj \
  $O/br_fast_log.obj \
  $O/br_histogram.obj \
  $O/br_huffman.obj \
  $O/br_literal_cost.obj \
  $O/br_memory.obj \
  $O/br_metablock.obj \
  $O/br_platform.obj \
  $O/br_shared_dictionary.obj \
  $O/br_state.obj \
  $O/br_static_dict.obj \
  $O/br_transform.obj \
  $O/br_utf8_util.obj \

LIZARD_OBJS = \
  $O/lizard_compress.obj \
  $O/lizard_decompress.obj \
  $O/lizard_frame.obj \

LZ4_OBJS = \
  $O\lz4.obj \
  $O\lz4frame.obj \
  $O\lz4hc.obj \

LZ5_OBJS = \
  $O\lz5.obj \
  $O\lz5frame.obj \
  $O\lz5hc.obj \

ZSTD_OBJS = \
  $O\debug.obj \
  $O\entropy_common.obj \
  $O\error_private.obj \
  $O\fse_compress.obj \
  $O\fse_decompress.obj \
  $O\hist.obj \
  $O\huf_compress.obj \
  $O\huf_decompress.obj \
  $O\pool.obj \
  $O\threading.obj \
  $O\xxhash.obj \
  $O\zstd_common.obj \
  $O\zstd_compress.obj \
  $O\zstd_compress_literals.obj \
  $O\zstd_compress_sequences.obj \
  $O\zstd_compress_superblock.obj \
  $O\zstd_ddict.obj \
  $O\zstd_decompress_block.obj \
  $O\zstd_decompress.obj \
  $O\zstd_double_fast.obj \
  $O\zstd_fast.obj \
  $O\zstd_lazy.obj \
  $O\zstd_ldm.obj \
  $O\zstdmt_compress.obj \
  $O\zstd_opt.obj \
  $O\zstd_preSplit.obj \
  $O\zstd_v01.obj \
  $O\zstd_v02.obj \
  $O\zstd_v03.obj \
  $O\zstd_v04.obj \
  $O\zstd_v05.obj \
  $O\zstd_v06.obj \
  $O\zstd_v07.obj \

ZSTDMT_OBJS = \
  $O\brotli-mt_common.obj \
  $O\brotli-mt_compress.obj \
  $O\brotli-mt_decompress.obj \
  $O\lizard-mt_common.obj \
  $O\lizard-mt_compress.obj \
  $O\lizard-mt_decompress.obj \
  $O\lz4-mt_common.obj \
  $O\lz4-mt_compress.obj \
  $O\lz4-mt_decompress.obj \
  $O\lz5-mt_common.obj \
  $O\lz5-mt_compress.obj \
  $O\lz5-mt_decompress.obj \
  $O\zstd-mt_threading.obj \

FASTLZMA2_OBJS = \
  $O\dict_buffer.obj \
  $O\fl2_common.obj \
  $O\fl2_compress.obj \
  $O\fl2_pool.obj \
  $O\fl2_threading.obj \
  $O\lzma2_enc.obj \
  $O\radix_bitpack.obj \
  $O\radix_mf.obj \
  $O\radix_struct.obj \
  $O\range_enc.obj \
  $O\util.obj \

!include "../../UI/Console/Console.mak"

!include "../../Aes.mak"
!include "../../Crc.mak"
!include "../../Crc64.mak"
!include "../../LzFindOpt.mak"
!include "../../LzmaDec.mak"
!include "../../Sha1.mak"
!include "../../Sha256.mak"

!include "../../7zip.mak"
