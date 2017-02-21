var path = require('path');
var webpack = require('webpack');

module.exports = {
  entry: './lib/js/src/index.js',
  output: {
    filename: 'index.js',
    path: path.resolve(__dirname, 'dist')
  },
  devServer: {
    contentBase: path.join(__dirname, 'dist'),
    compress: true,
    port: 1337
  },
  watch: true
};
