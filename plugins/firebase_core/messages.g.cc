// Copyright 2023, the Chromium project authors.  Please see the AUTHORS file
// for details. All rights reserved. Use of this source code is governed by a
// BSD-style license that can be found in the LICENSE file.
// Autogenerated from Pigeon (v9.0.6), do not edit directly.
// See also: https://pub.dev/packages/pigeon

#undef _HAS_EXCEPTIONS

#include "messages.g.h"

#include <flutter/basic_message_channel.h>
#include <flutter/binary_messenger.h>
#include <flutter/encodable_value.h>
#include <flutter/standard_message_codec.h>

#include <map>
#include <optional>
#include <string>

namespace firebase_core_linux {
using flutter::BasicMessageChannel;
using flutter::CustomEncodableValue;
using flutter::EncodableList;
using flutter::EncodableMap;
using flutter::EncodableValue;

// PigeonFirebaseOptions

const std::string& PigeonFirebaseOptions::api_key() const { return api_key_; }
void PigeonFirebaseOptions::set_api_key(std::string_view value_arg) {
  api_key_ = value_arg;
}

const std::string& PigeonFirebaseOptions::app_id() const { return app_id_; }
void PigeonFirebaseOptions::set_app_id(std::string_view value_arg) {
  app_id_ = value_arg;
}

const std::string& PigeonFirebaseOptions::messaging_sender_id() const {
  return messaging_sender_id_;
}
void PigeonFirebaseOptions::set_messaging_sender_id(
    std::string_view value_arg) {
  messaging_sender_id_ = value_arg;
}

const std::string& PigeonFirebaseOptions::project_id() const {
  return project_id_;
}
void PigeonFirebaseOptions::set_project_id(std::string_view value_arg) {
  project_id_ = value_arg;
}

const std::string* PigeonFirebaseOptions::auth_domain() const {
  return auth_domain_ ? &(*auth_domain_) : nullptr;
}
void PigeonFirebaseOptions::set_auth_domain(const std::string_view* value_arg) {
  auth_domain_ =
      value_arg ? std::optional<std::string>(*value_arg) : std::nullopt;
}
void PigeonFirebaseOptions::set_auth_domain(std::string_view value_arg) {
  auth_domain_ = value_arg;
}

const std::string* PigeonFirebaseOptions::database_u_r_l() const {
  return database_u_r_l_ ? &(*database_u_r_l_) : nullptr;
}
void PigeonFirebaseOptions::set_database_u_r_l(
    const std::string_view* value_arg) {
  database_u_r_l_ =
      value_arg ? std::optional<std::string>(*value_arg) : std::nullopt;
}
void PigeonFirebaseOptions::set_database_u_r_l(std::string_view value_arg) {
  database_u_r_l_ = value_arg;
}

const std::string* PigeonFirebaseOptions::storage_bucket() const {
  return storage_bucket_ ? &(*storage_bucket_) : nullptr;
}
void PigeonFirebaseOptions::set_storage_bucket(
    const std::string_view* value_arg) {
  storage_bucket_ =
      value_arg ? std::optional<std::string>(*value_arg) : std::nullopt;
}
void PigeonFirebaseOptions::set_storage_bucket(std::string_view value_arg) {
  storage_bucket_ = value_arg;
}

const std::string* PigeonFirebaseOptions::measurement_id() const {
  return measurement_id_ ? &(*measurement_id_) : nullptr;
}
void PigeonFirebaseOptions::set_measurement_id(
    const std::string_view* value_arg) {
  measurement_id_ =
      value_arg ? std::optional<std::string>(*value_arg) : std::nullopt;
}
void PigeonFirebaseOptions::set_measurement_id(std::string_view value_arg) {
  measurement_id_ = value_arg;
}

const std::string* PigeonFirebaseOptions::tracking_id() const {
  return tracking_id_ ? &(*tracking_id_) : nullptr;
}
void PigeonFirebaseOptions::set_tracking_id(const std::string_view* value_arg) {
  tracking_id_ =
      value_arg ? std::optional<std::string>(*value_arg) : std::nullopt;
}
void PigeonFirebaseOptions::set_tracking_id(std::string_view value_arg) {
  tracking_id_ = value_arg;
}

const std::string* PigeonFirebaseOptions::deep_link_u_r_l_scheme() const {
  return deep_link_u_r_l_scheme_ ? &(*deep_link_u_r_l_scheme_) : nullptr;
}
void PigeonFirebaseOptions::set_deep_link_u_r_l_scheme(
    const std::string_view* value_arg) {
  deep_link_u_r_l_scheme_ =
      value_arg ? std::optional<std::string>(*value_arg) : std::nullopt;
}
void PigeonFirebaseOptions::set_deep_link_u_r_l_scheme(
    std::string_view value_arg) {
  deep_link_u_r_l_scheme_ = value_arg;
}

const std::string* PigeonFirebaseOptions::android_client_id() const {
  return android_client_id_ ? &(*android_client_id_) : nullptr;
}
void PigeonFirebaseOptions::set_android_client_id(
    const std::string_view* value_arg) {
  android_client_id_ =
      value_arg ? std::optional<std::string>(*value_arg) : std::nullopt;
}
void PigeonFirebaseOptions::set_android_client_id(std::string_view value_arg) {
  android_client_id_ = value_arg;
}

const std::string* PigeonFirebaseOptions::ios_client_id() const {
  return ios_client_id_ ? &(*ios_client_id_) : nullptr;
}
void PigeonFirebaseOptions::set_ios_client_id(
    const std::string_view* value_arg) {
  ios_client_id_ =
      value_arg ? std::optional<std::string>(*value_arg) : std::nullopt;
}
void PigeonFirebaseOptions::set_ios_client_id(std::string_view value_arg) {
  ios_client_id_ = value_arg;
}

const std::string* PigeonFirebaseOptions::ios_bundle_id() const {
  return ios_bundle_id_ ? &(*ios_bundle_id_) : nullptr;
}
void PigeonFirebaseOptions::set_ios_bundle_id(
    const std::string_view* value_arg) {
  ios_bundle_id_ =
      value_arg ? std::optional<std::string>(*value_arg) : std::nullopt;
}
void PigeonFirebaseOptions::set_ios_bundle_id(std::string_view value_arg) {
  ios_bundle_id_ = value_arg;
}

const std::string* PigeonFirebaseOptions::app_group_id() const {
  return app_group_id_ ? &(*app_group_id_) : nullptr;
}
void PigeonFirebaseOptions::set_app_group_id(
    const std::string_view* value_arg) {
  app_group_id_ =
      value_arg ? std::optional<std::string>(*value_arg) : std::nullopt;
}
void PigeonFirebaseOptions::set_app_group_id(std::string_view value_arg) {
  app_group_id_ = value_arg;
}

EncodableList PigeonFirebaseOptions::ToEncodableList() const {
  EncodableList list;
  list.reserve(14);
  list.push_back(EncodableValue(api_key_));
  list.push_back(EncodableValue(app_id_));
  list.push_back(EncodableValue(messaging_sender_id_));
  list.push_back(EncodableValue(project_id_));
  list.push_back(auth_domain_ ? EncodableValue(*auth_domain_)
                              : EncodableValue());
  list.push_back(database_u_r_l_ ? EncodableValue(*database_u_r_l_)
                                 : EncodableValue());
  list.push_back(storage_bucket_ ? EncodableValue(*storage_bucket_)
                                 : EncodableValue());
  list.push_back(measurement_id_ ? EncodableValue(*measurement_id_)
                                 : EncodableValue());
  list.push_back(tracking_id_ ? EncodableValue(*tracking_id_)
                              : EncodableValue());
  list.push_back(deep_link_u_r_l_scheme_
                     ? EncodableValue(*deep_link_u_r_l_scheme_)
                     : EncodableValue());
  list.push_back(android_client_id_ ? EncodableValue(*android_client_id_)
                                    : EncodableValue());
  list.push_back(ios_client_id_ ? EncodableValue(*ios_client_id_)
                                : EncodableValue());
  list.push_back(ios_bundle_id_ ? EncodableValue(*ios_bundle_id_)
                                : EncodableValue());
  list.push_back(app_group_id_ ? EncodableValue(*app_group_id_)
                               : EncodableValue());
  return list;
}

PigeonFirebaseOptions::PigeonFirebaseOptions() {}

PigeonFirebaseOptions::PigeonFirebaseOptions(const EncodableList& list) {
  auto& encodable_api_key = list[0];
  if (const std::string* pointer_api_key =
          std::get_if<std::string>(&encodable_api_key)) {
    api_key_ = *pointer_api_key;
  }
  auto& encodable_app_id = list[1];
  if (const std::string* pointer_app_id =
          std::get_if<std::string>(&encodable_app_id)) {
    app_id_ = *pointer_app_id;
  }
  auto& encodable_messaging_sender_id = list[2];
  if (const std::string* pointer_messaging_sender_id =
          std::get_if<std::string>(&encodable_messaging_sender_id)) {
    messaging_sender_id_ = *pointer_messaging_sender_id;
  }
  auto& encodable_project_id = list[3];
  if (const std::string* pointer_project_id =
          std::get_if<std::string>(&encodable_project_id)) {
    project_id_ = *pointer_project_id;
  }
  auto& encodable_auth_domain = list[4];
  if (const std::string* pointer_auth_domain =
          std::get_if<std::string>(&encodable_auth_domain)) {
    auth_domain_ = *pointer_auth_domain;
  }
  auto& encodable_database_u_r_l = list[5];
  if (const std::string* pointer_database_u_r_l =
          std::get_if<std::string>(&encodable_database_u_r_l)) {
    database_u_r_l_ = *pointer_database_u_r_l;
  }
  auto& encodable_storage_bucket = list[6];
  if (const std::string* pointer_storage_bucket =
          std::get_if<std::string>(&encodable_storage_bucket)) {
    storage_bucket_ = *pointer_storage_bucket;
  }
  auto& encodable_measurement_id = list[7];
  if (const std::string* pointer_measurement_id =
          std::get_if<std::string>(&encodable_measurement_id)) {
    measurement_id_ = *pointer_measurement_id;
  }
  auto& encodable_tracking_id = list[8];
  if (const std::string* pointer_tracking_id =
          std::get_if<std::string>(&encodable_tracking_id)) {
    tracking_id_ = *pointer_tracking_id;
  }
  auto& encodable_deep_link_u_r_l_scheme = list[9];
  if (const std::string* pointer_deep_link_u_r_l_scheme =
          std::get_if<std::string>(&encodable_deep_link_u_r_l_scheme)) {
    deep_link_u_r_l_scheme_ = *pointer_deep_link_u_r_l_scheme;
  }
  auto& encodable_android_client_id = list[10];
  if (const std::string* pointer_android_client_id =
          std::get_if<std::string>(&encodable_android_client_id)) {
    android_client_id_ = *pointer_android_client_id;
  }
  auto& encodable_ios_client_id = list[11];
  if (const std::string* pointer_ios_client_id =
          std::get_if<std::string>(&encodable_ios_client_id)) {
    ios_client_id_ = *pointer_ios_client_id;
  }
  auto& encodable_ios_bundle_id = list[12];
  if (const std::string* pointer_ios_bundle_id =
          std::get_if<std::string>(&encodable_ios_bundle_id)) {
    ios_bundle_id_ = *pointer_ios_bundle_id;
  }
  auto& encodable_app_group_id = list[13];
  if (const std::string* pointer_app_group_id =
          std::get_if<std::string>(&encodable_app_group_id)) {
    app_group_id_ = *pointer_app_group_id;
  }
}

// PigeonInitializeResponse

const std::string& PigeonInitializeResponse::name() const { return name_; }
void PigeonInitializeResponse::set_name(std::string_view value_arg) {
  name_ = value_arg;
}

const PigeonFirebaseOptions& PigeonInitializeResponse::options() const {
  return options_;
}
void PigeonInitializeResponse::set_options(
    const PigeonFirebaseOptions& value_arg) {
  options_ = value_arg;
}

const bool* PigeonInitializeResponse::is_automatic_data_collection_enabled()
    const {
  return is_automatic_data_collection_enabled_
             ? &(*is_automatic_data_collection_enabled_)
             : nullptr;
}
void PigeonInitializeResponse::set_is_automatic_data_collection_enabled(
    const bool* value_arg) {
  is_automatic_data_collection_enabled_ =
      value_arg ? std::optional<bool>(*value_arg) : std::nullopt;
}
void PigeonInitializeResponse::set_is_automatic_data_collection_enabled(
    bool value_arg) {
  is_automatic_data_collection_enabled_ = value_arg;
}

const EncodableMap& PigeonInitializeResponse::plugin_constants() const {
  return plugin_constants_;
}
void PigeonInitializeResponse::set_plugin_constants(
    const EncodableMap& value_arg) {
  plugin_constants_ = value_arg;
}

EncodableList PigeonInitializeResponse::ToEncodableList() const {
  EncodableList list;
  list.reserve(4);
  list.push_back(EncodableValue(name_));
  list.push_back(EncodableValue(options_.ToEncodableList()));
  list.push_back(is_automatic_data_collection_enabled_
                     ? EncodableValue(*is_automatic_data_collection_enabled_)
                     : EncodableValue());
  list.push_back(EncodableValue(plugin_constants_));
  return list;
}

PigeonInitializeResponse::PigeonInitializeResponse() {}

PigeonInitializeResponse::PigeonInitializeResponse(const EncodableList& list) {
  auto& encodable_name = list[0];
  if (const std::string* pointer_name =
          std::get_if<std::string>(&encodable_name)) {
    name_ = *pointer_name;
  }
  auto& encodable_options = list[1];
  if (const EncodableList* pointer_options =
          std::get_if<EncodableList>(&encodable_options)) {
    options_ = PigeonFirebaseOptions(*pointer_options);
  }
  auto& encodable_is_automatic_data_collection_enabled = list[2];
  if (const bool* pointer_is_automatic_data_collection_enabled =
          std::get_if<bool>(&encodable_is_automatic_data_collection_enabled)) {
    is_automatic_data_collection_enabled_ =
        *pointer_is_automatic_data_collection_enabled;
  }
  auto& encodable_plugin_constants = list[3];
  if (const EncodableMap* pointer_plugin_constants =
          std::get_if<EncodableMap>(&encodable_plugin_constants)) {
    plugin_constants_ = *pointer_plugin_constants;
  }
}

FirebaseCoreHostApiCodecSerializer::FirebaseCoreHostApiCodecSerializer() {}
EncodableValue FirebaseCoreHostApiCodecSerializer::ReadValueOfType(
    uint8_t type, flutter::ByteStreamReader* stream) const {
  switch (type) {
    case 128:
      return CustomEncodableValue(
          PigeonFirebaseOptions(std::get<EncodableList>(ReadValue(stream))));
    case 129:
      return CustomEncodableValue(
          PigeonInitializeResponse(std::get<EncodableList>(ReadValue(stream))));
    default:
      return flutter::StandardCodecSerializer::ReadValueOfType(type, stream);
  }
}

void FirebaseCoreHostApiCodecSerializer::WriteValue(
    const EncodableValue& value, flutter::ByteStreamWriter* stream) const {
  if (const CustomEncodableValue* custom_value =
          std::get_if<CustomEncodableValue>(&value)) {
    if (custom_value->type() == typeid(PigeonFirebaseOptions)) {
      stream->WriteByte(128);
      WriteValue(
          EncodableValue(std::any_cast<PigeonFirebaseOptions>(*custom_value)
                             .ToEncodableList()),
          stream);
      return;
    }
    if (custom_value->type() == typeid(PigeonInitializeResponse)) {
      stream->WriteByte(129);
      WriteValue(
          EncodableValue(std::any_cast<PigeonInitializeResponse>(*custom_value)
                             .ToEncodableList()),
          stream);
      return;
    }
  }
  flutter::StandardCodecSerializer::WriteValue(value, stream);
}

/// The codec used by FirebaseCoreHostApi.
const flutter::StandardMessageCodec& FirebaseCoreHostApi::GetCodec() {
  return flutter::StandardMessageCodec::GetInstance(
      &FirebaseCoreHostApiCodecSerializer::GetInstance());
}

// Sets up an instance of `FirebaseCoreHostApi` to handle messages through the
// `binary_messenger`.
void FirebaseCoreHostApi::SetUp(flutter::BinaryMessenger* binary_messenger,
                                FirebaseCoreHostApi* api) {
  {
    auto channel = std::make_unique<BasicMessageChannel<>>(
        binary_messenger,
        "dev.flutter.pigeon.FirebaseCoreHostApi.initializeApp", &GetCodec());
    if (api != nullptr) {
      channel->SetMessageHandler(
          [api](const EncodableValue& message,
                const flutter::MessageReply<EncodableValue>& reply) {
            try {
              const auto& args = std::get<EncodableList>(message);
              const auto& encodable_app_name_arg = args.at(0);
              if (encodable_app_name_arg.IsNull()) {
                reply(WrapError("app_name_arg unexpectedly null."));
                return;
              }
              const auto& app_name_arg =
                  std::get<std::string>(encodable_app_name_arg);
              const auto& encodable_initialize_app_request_arg = args.at(1);
              if (encodable_initialize_app_request_arg.IsNull()) {
                reply(
                    WrapError("initialize_app_request_arg unexpectedly null."));
                return;
              }
              const auto& initialize_app_request_arg =
                  std::any_cast<const PigeonFirebaseOptions&>(
                      std::get<CustomEncodableValue>(
                          encodable_initialize_app_request_arg));
              api->InitializeApp(
                  app_name_arg, initialize_app_request_arg,
                  [reply](ErrorOr<PigeonInitializeResponse>&& output) {
                    if (output.has_error()) {
                      reply(WrapError(output.error()));
                      return;
                    }
                    EncodableList wrapped;
                    wrapped.push_back(
                        CustomEncodableValue(std::move(output).TakeValue()));
                    reply(EncodableValue(std::move(wrapped)));
                  });
            } catch (const std::exception& exception) {
              reply(WrapError(exception.what()));
            }
          });
    } else {
      channel->SetMessageHandler(nullptr);
    }
  }
  {
    auto channel = std::make_unique<BasicMessageChannel<>>(
        binary_messenger,
        "dev.flutter.pigeon.FirebaseCoreHostApi.initializeCore", &GetCodec());
    if (api != nullptr) {
      channel->SetMessageHandler(
          [api](const EncodableValue& /* message */,
                const flutter::MessageReply<EncodableValue>& reply) {
            try {
              api->InitializeCore([reply](ErrorOr<EncodableList>&& output) {
                if (output.has_error()) {
                  reply(WrapError(output.error()));
                  return;
                }
                EncodableList wrapped;
                wrapped.push_back(
                    EncodableValue(std::move(output).TakeValue()));
                reply(EncodableValue(std::move(wrapped)));
              });
            } catch (const std::exception& exception) {
              reply(WrapError(exception.what()));
            }
          });
    } else {
      channel->SetMessageHandler(nullptr);
    }
  }
  {
    auto channel = std::make_unique<BasicMessageChannel<>>(
        binary_messenger,
        "dev.flutter.pigeon.FirebaseCoreHostApi.optionsFromResource",
        &GetCodec());
    if (api != nullptr) {
      channel->SetMessageHandler(
          [api](const EncodableValue& /* message */,
                const flutter::MessageReply<EncodableValue>& reply) {
            try {
              api->OptionsFromResource(
                  [reply](ErrorOr<PigeonFirebaseOptions>&& output) {
                    if (output.has_error()) {
                      reply(WrapError(output.error()));
                      return;
                    }
                    EncodableList wrapped;
                    wrapped.push_back(
                        CustomEncodableValue(std::move(output).TakeValue()));
                    reply(EncodableValue(std::move(wrapped)));
                  });
            } catch (const std::exception& exception) {
              reply(WrapError(exception.what()));
            }
          });
    } else {
      channel->SetMessageHandler(nullptr);
    }
  }
}

EncodableValue FirebaseCoreHostApi::WrapError(std::string_view error_message) {
  return EncodableValue(
      EncodableList{EncodableValue(std::string(error_message)),
                    EncodableValue("Error"), EncodableValue()});
}
EncodableValue FirebaseCoreHostApi::WrapError(const FlutterError& error) {
  return EncodableValue(EncodableList{EncodableValue(error.message()),
                                      EncodableValue(error.code()),
                                      error.details()});
}

/// The codec used by FirebaseAppHostApi.
const flutter::StandardMessageCodec& FirebaseAppHostApi::GetCodec() {
  return flutter::StandardMessageCodec::GetInstance(
      &flutter::StandardCodecSerializer::GetInstance());
}

// Sets up an instance of `FirebaseAppHostApi` to handle messages through the
// `binary_messenger`.
void FirebaseAppHostApi::SetUp(flutter::BinaryMessenger* binary_messenger,
                               FirebaseAppHostApi* api) {
  {
    auto channel = std::make_unique<BasicMessageChannel<>>(
        binary_messenger,
        "dev.flutter.pigeon.FirebaseAppHostApi."
        "setAutomaticDataCollectionEnabled",
        &GetCodec());
    if (api != nullptr) {
      channel->SetMessageHandler(
          [api](const EncodableValue& message,
                const flutter::MessageReply<EncodableValue>& reply) {
            try {
              const auto& args = std::get<EncodableList>(message);
              const auto& encodable_app_name_arg = args.at(0);
              if (encodable_app_name_arg.IsNull()) {
                reply(WrapError("app_name_arg unexpectedly null."));
                return;
              }
              const auto& app_name_arg =
                  std::get<std::string>(encodable_app_name_arg);
              const auto& encodable_enabled_arg = args.at(1);
              if (encodable_enabled_arg.IsNull()) {
                reply(WrapError("enabled_arg unexpectedly null."));
                return;
              }
              const auto& enabled_arg = std::get<bool>(encodable_enabled_arg);
              api->SetAutomaticDataCollectionEnabled(
                  app_name_arg, enabled_arg,
                  [reply](std::optional<FlutterError>&& output) {
                    if (output.has_value()) {
                      reply(WrapError(output.value()));
                      return;
                    }
                    EncodableList wrapped;
                    wrapped.push_back(EncodableValue());
                    reply(EncodableValue(std::move(wrapped)));
                  });
            } catch (const std::exception& exception) {
              reply(WrapError(exception.what()));
            }
          });
    } else {
      channel->SetMessageHandler(nullptr);
    }
  }
  {
    auto channel = std::make_unique<BasicMessageChannel<>>(
        binary_messenger,
        "dev.flutter.pigeon.FirebaseAppHostApi."
        "setAutomaticResourceManagementEnabled",
        &GetCodec());
    if (api != nullptr) {
      channel->SetMessageHandler(
          [api](const EncodableValue& message,
                const flutter::MessageReply<EncodableValue>& reply) {
            try {
              const auto& args = std::get<EncodableList>(message);
              const auto& encodable_app_name_arg = args.at(0);
              if (encodable_app_name_arg.IsNull()) {
                reply(WrapError("app_name_arg unexpectedly null."));
                return;
              }
              const auto& app_name_arg =
                  std::get<std::string>(encodable_app_name_arg);
              const auto& encodable_enabled_arg = args.at(1);
              if (encodable_enabled_arg.IsNull()) {
                reply(WrapError("enabled_arg unexpectedly null."));
                return;
              }
              const auto& enabled_arg = std::get<bool>(encodable_enabled_arg);
              api->SetAutomaticResourceManagementEnabled(
                  app_name_arg, enabled_arg,
                  [reply](std::optional<FlutterError>&& output) {
                    if (output.has_value()) {
                      reply(WrapError(output.value()));
                      return;
                    }
                    EncodableList wrapped;
                    wrapped.push_back(EncodableValue());
                    reply(EncodableValue(std::move(wrapped)));
                  });
            } catch (const std::exception& exception) {
              reply(WrapError(exception.what()));
            }
          });
    } else {
      channel->SetMessageHandler(nullptr);
    }
  }
  {
    auto channel = std::make_unique<BasicMessageChannel<>>(
        binary_messenger, "dev.flutter.pigeon.FirebaseAppHostApi.delete",
        &GetCodec());
    if (api != nullptr) {
      channel->SetMessageHandler(
          [api](const EncodableValue& message,
                const flutter::MessageReply<EncodableValue>& reply) {
            try {
              const auto& args = std::get<EncodableList>(message);
              const auto& encodable_app_name_arg = args.at(0);
              if (encodable_app_name_arg.IsNull()) {
                reply(WrapError("app_name_arg unexpectedly null."));
                return;
              }
              const auto& app_name_arg =
                  std::get<std::string>(encodable_app_name_arg);
              api->Delete(app_name_arg,
                          [reply](std::optional<FlutterError>&& output) {
                            if (output.has_value()) {
                              reply(WrapError(output.value()));
                              return;
                            }
                            EncodableList wrapped;
                            wrapped.push_back(EncodableValue());
                            reply(EncodableValue(std::move(wrapped)));
                          });
            } catch (const std::exception& exception) {
              reply(WrapError(exception.what()));
            }
          });
    } else {
      channel->SetMessageHandler(nullptr);
    }
  }
}

EncodableValue FirebaseAppHostApi::WrapError(std::string_view error_message) {
  return EncodableValue(
      EncodableList{EncodableValue(std::string(error_message)),
                    EncodableValue("Error"), EncodableValue()});
}
EncodableValue FirebaseAppHostApi::WrapError(const FlutterError& error) {
  return EncodableValue(EncodableList{EncodableValue(error.message()),
                                      EncodableValue(error.code()),
                                      error.details()});
}

}  // namespace firebase_core_linux
