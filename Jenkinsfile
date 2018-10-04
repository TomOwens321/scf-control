@Library('shared-libs@development')
import com.towens.*

node('bbone') {
    stage('Checkout') {
        cf = new checkoutFuncs()
        cf.checkoutWithRetries()
    }

    stage('Test') {
        sh = new sayHello()
        sh.sayHello('TomO')
        sh 'build/ardverify.sh'
    }
}
